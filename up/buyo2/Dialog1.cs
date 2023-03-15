using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace buyo2
{
    public partial class Dialog1 : Form
    {
        public string dlmsg = "";
        public Dialog1()
        {
            InitializeComponent();
        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {
            if (textBox1.Text.Length == 6 && int.TryParse(textBox1.Text, out int t))
            {
                dlmsg = textBox1.Text;

                this.Close();
            }
            else MessageBox.Show("Меньше 6 символов либо не цифры", "Ошибка", MessageBoxButtons.OK);
        }
    }
}
