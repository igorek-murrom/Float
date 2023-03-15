using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.IO.Ports;
using System.Linq;
using System.Net.Configuration;
using System.Net.NetworkInformation;
using System.Runtime.InteropServices;
using System.Text;
using System.Threading;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Xml.Linq;
using static System.Windows.Forms.VisualStyles.VisualStyleElement;
using static System.Windows.Forms.VisualStyles.VisualStyleElement.ToolBar;
using static System.Windows.Forms.VisualStyles.VisualStyleElement.Window;

namespace buyo2
{
    public partial class Form1 : Form
    {
        private static bool flag_time = false;
        private static bool flag_connect = false;

        SerialPort ser;
        public Form1()
        {
            InitializeComponent();
            FormClosing += Form1_FormClosing;
            foreach (string port in SerialPort.GetPortNames()) comboBox.Items.Add(port);
            try { comboBox.SelectedIndex = 0; }
            catch { }
            Thread thread = new Thread(this.Work);
            thread.Start();
        }
        private void Read(object sender, SerialDataReceivedEventArgs e)
        {
            if (flag_time && flag_connect)
            {
                try
                {
                    string message = ser.ReadLine();
                    textBox1.Invoke((Action)delegate { textBox1.AppendText(message + '\r' + '\n'); });
                }
                catch (Exception ex) { Console.WriteLine(ex.Message); }
            }
        }
        private void Work()
        {
            while (true)
            {
                if (flag_connect)
                {
                    if (ser.IsOpen)
                        create_button.Invoke((Action)delegate { create_button.BackColor = Color.FromName("Green"); });
                    else
                    {
                        create_button.Invoke((Action)delegate { create_button.BackColor = Color.FromName("White"); });
                        flag_connect = false; flag_time = false;
                        time_button.BackColor = Color.FromName("White");
                    }
                }
                Thread.Sleep(50);
            }
        }
        private void Create_Click(object sender, EventArgs e)
        {
            if (Get_name() != "" && !flag_connect)
            {
                ser = new SerialPort(Get_name());
                ser.DataReceived += new SerialDataReceivedEventHandler(Read);
                try { ser.Open(); }
                catch (Exception ex) { MessageBox.Show(ex.ToString(), "Внимание", MessageBoxButtons.OK); }
                flag_connect = true;
            }
            else if (flag_connect)
            {
                ser.Close();
                //create_button.Invoke((Action)delegate { create_button.BackColor = Color.FromName("White"); });
                Thread.Sleep(50);
            }
            else MessageBox.Show("Надо выбрать COM-порт", "Внимание", MessageBoxButtons.OK);
        }
        private void Set_time_Click(object sender, EventArgs e)
        {
            if (flag_connect)
            {
                Dialog1 testDialog = new Dialog1();
                testDialog.ShowDialog();
                if (testDialog.dlmsg != "") Write("s" + testDialog.dlmsg + "x");
                testDialog.Dispose();
            }
            else MessageBox.Show("сначала подключение", "Внимание", MessageBoxButtons.OK);

        }
        private void Start_button_Click(object sender, EventArgs e)
        {
            if (flag_connect)
            {
                Write("z");
            }
            else MessageBox.Show("сначала подключение", "Внимание", MessageBoxButtons.OK);
        }
        private void Time_button_Click(object sender, EventArgs e)
        {
            if (flag_connect)
            {
                flag_time = !flag_time;
                if (flag_time) time_button.BackColor = Color.FromName("Blue");
                else time_button.BackColor = Color.FromName("White");
            }
            else
            {
                time_button.BackColor = Color.FromName("White");
                MessageBox.Show("сначала подключение", "Внимание", MessageBoxButtons.OK);
            }
        }
        private void Reset_button_Click(object sender, EventArgs e)
        {
            if (flag_connect)
            {
                Write("r");
            }
            else MessageBox.Show("сначала подключение", "Внимание", MessageBoxButtons.OK);
        }
        private void Clear_button_Click(object sender, EventArgs e)
        {
            textBox1.Text = string.Empty;
        }
        private void Button_update_Click(object sender, EventArgs e)
        {
            string[] ports = SerialPort.GetPortNames();
            comboBox.Items.Clear();

            foreach (string port in ports) comboBox.Items.Add(port);
            try { comboBox.SelectedIndex = 0; }
            catch { }
        }
        public void Write(string message)
        {
            try
            {
                ser.Write(message);
                //ser.WriteLine(String.Format("<{0}>: {1}", get_name(), message));
                //_serialPort.Write(message.ToCharArray(), 0, message.Length);
            }
            catch (TimeoutException) { }
        }
        private string Get_name()
        {
            string msg = "";
            comboBox.Invoke((Action)delegate { msg = comboBox.Text; });
            return msg;
        }
        private void Form1_FormClosing(object sender, FormClosingEventArgs e)
        {
            Environment.Exit(0);
        }
    }
}