using System.Drawing;
using System.Windows.Forms;

namespace buyo2
{
    partial class Form1
    {
        /// <summary>
        /// Обязательная переменная конструктора.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Освободить все используемые ресурсы.
        /// </summary>
        /// <param name="disposing">истинно, если управляемый ресурс должен быть удален; иначе ложно.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Код, автоматически созданный конструктором форм Windows

        /// <summary>
        /// Требуемый метод для поддержки конструктора — не изменяйте 
        /// содержимое этого метода с помощью редактора кода.
        /// </summary>
        private void InitializeComponent()
        {
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(Form1));
            this.textBox1 = new System.Windows.Forms.TextBox();
            this.start_button = new System.Windows.Forms.Button();
            this.time_button = new System.Windows.Forms.Button();
            this.reset_button = new System.Windows.Forms.Button();
            this.clear_button = new System.Windows.Forms.Button();
            this.comboBox = new System.Windows.Forms.ComboBox();
            this.button_update = new System.Windows.Forms.Button();
            this.create_button = new System.Windows.Forms.Button();
            this.delete_button = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // textBox1
            // 
            this.textBox1.Location = new System.Drawing.Point(12, 12);
            this.textBox1.Multiline = true;
            this.textBox1.Name = "textBox1";
            this.textBox1.ReadOnly = true;
            this.textBox1.ScrollBars = System.Windows.Forms.ScrollBars.Vertical;
            this.textBox1.Size = new System.Drawing.Size(414, 336);
            this.textBox1.TabIndex = 1;
            // 
            // start_button
            // 
            this.start_button.Location = new System.Drawing.Point(443, 12);
            this.start_button.Name = "start_button";
            this.start_button.Size = new System.Drawing.Size(175, 29);
            this.start_button.TabIndex = 2;
            this.start_button.Text = "Запуск";
            this.start_button.UseVisualStyleBackColor = true;
            this.start_button.Click += new System.EventHandler(this.Start_button_Click);
            // 
            // time_button
            // 
            this.time_button.BackColor = System.Drawing.Color.White;
            this.time_button.Location = new System.Drawing.Point(443, 217);
            this.time_button.Name = "time_button";
            this.time_button.Size = new System.Drawing.Size(175, 29);
            this.time_button.TabIndex = 3;
            this.time_button.Text = "Отслеживание";
            this.time_button.UseVisualStyleBackColor = false;
            this.time_button.Click += new System.EventHandler(this.Time_button_Click);
            // 
            // reset_button
            // 
            this.reset_button.Location = new System.Drawing.Point(443, 61);
            this.reset_button.Name = "reset_button";
            this.reset_button.Size = new System.Drawing.Size(175, 29);
            this.reset_button.TabIndex = 4;
            this.reset_button.Text = "Перезагрузка";
            this.reset_button.UseVisualStyleBackColor = true;
            this.reset_button.Click += new System.EventHandler(this.Reset_button_Click);
            // 
            // clear_button
            // 
            this.clear_button.BackColor = System.Drawing.Color.White;
            this.clear_button.Location = new System.Drawing.Point(443, 163);
            this.clear_button.Name = "clear_button";
            this.clear_button.Size = new System.Drawing.Size(175, 29);
            this.clear_button.TabIndex = 5;
            this.clear_button.Text = "Очистить";
            this.clear_button.UseVisualStyleBackColor = false;
            this.clear_button.Click += new System.EventHandler(this.Clear_button_Click);
            // 
            // comboBox
            // 
            this.comboBox.FormattingEnabled = true;
            this.comboBox.Location = new System.Drawing.Point(497, 324);
            this.comboBox.Name = "comboBox";
            this.comboBox.Items.Clear();
            this.comboBox.Size = new System.Drawing.Size(121, 24);
            this.comboBox.TabIndex = 6;
            // 
            // button_update
            // 
            this.button_update.BackColor = System.Drawing.Color.White;
            this.button_update.Location = new System.Drawing.Point(443, 324);
            this.button_update.Name = "button_update";
            this.button_update.Size = new System.Drawing.Size(46, 24);
            this.button_update.TabIndex = 7;
            this.button_update.Text = "обновление";
            this.button_update.UseVisualStyleBackColor = false;
            this.button_update.Click += new System.EventHandler(this.Button_update_Click);
            // 
            // create_button
            // 
            this.create_button.BackColor = System.Drawing.Color.White;
            this.create_button.Location = new System.Drawing.Point(443, 269);
            this.create_button.Name = "create_button";
            this.create_button.Size = new System.Drawing.Size(175, 29);
            this.create_button.TabIndex = 8;
            this.create_button.Text = "Подключение";
            this.create_button.UseVisualStyleBackColor = false;
            this.create_button.Click += new System.EventHandler(this.Create_Click);
            // 
            // delete_button
            // 
            this.delete_button.BackColor = System.Drawing.Color.White;
            this.delete_button.Location = new System.Drawing.Point(443, 112);
            this.delete_button.Name = "delete_button";
            this.delete_button.Size = new System.Drawing.Size(175, 29);
            this.delete_button.TabIndex = 9;
            this.delete_button.Text = "Установка времени";
            this.delete_button.UseVisualStyleBackColor = false;
            this.delete_button.Click += new System.EventHandler(this.Set_time_Click);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(8F, 16F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(631, 362);
            this.Controls.Add(this.delete_button);
            this.Controls.Add(this.create_button);
            this.Controls.Add(this.button_update);
            this.Controls.Add(this.comboBox);
            this.Controls.Add(this.clear_button);
            this.Controls.Add(this.reset_button);
            this.Controls.Add(this.time_button);
            this.Controls.Add(this.start_button);
            this.Controls.Add(this.textBox1);
            this.FormBorderStyle = System.Windows.Forms.FormBorderStyle.FixedSingle;
            this.Icon = ((System.Drawing.Icon)(resources.GetObject("$this.Icon")));
            this.MaximizeBox = false;
            this.Name = "Form1";
            this.Text = "buyo";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion
        private System.Windows.Forms.TextBox textBox1;
        private System.Windows.Forms.Button start_button;
        private System.Windows.Forms.Button time_button;
        private System.Windows.Forms.Button reset_button;
        private System.Windows.Forms.Button clear_button;
        private System.Windows.Forms.ComboBox comboBox;
        private System.Windows.Forms.Button button_update;
        private System.Windows.Forms.Button create_button;
        private System.Windows.Forms.Button delete_button;
    }
}