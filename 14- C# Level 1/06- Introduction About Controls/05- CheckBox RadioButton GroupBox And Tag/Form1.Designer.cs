namespace _05__CheckBox_RadioButton_GroupBox_And_Tag
{
    partial class Form1
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.chkAgree = new System.Windows.Forms.CheckBox();
            this.button1 = new System.Windows.Forms.Button();
            this.gbSize = new System.Windows.Forms.GroupBox();
            this.rbSmall = new System.Windows.Forms.RadioButton();
            this.rbMedium = new System.Windows.Forms.RadioButton();
            this.rbLarge = new System.Windows.Forms.RadioButton();
            this.gbCrust = new System.Windows.Forms.GroupBox();
            this.rbThick = new System.Windows.Forms.RadioButton();
            this.rbThin = new System.Windows.Forms.RadioButton();
            this.btnDisableSize = new System.Windows.Forms.Button();
            this.gbSize.SuspendLayout();
            this.gbCrust.SuspendLayout();
            this.SuspendLayout();
            // 
            // chkAgree
            // 
            this.chkAgree.AutoSize = true;
            this.chkAgree.Location = new System.Drawing.Point(109, 151);
            this.chkAgree.Name = "chkAgree";
            this.chkAgree.Size = new System.Drawing.Size(105, 17);
            this.chkAgree.TabIndex = 0;
            this.chkAgree.Text = "Read And Agree";
            this.chkAgree.UseVisualStyleBackColor = true;
            this.chkAgree.CheckedChanged += new System.EventHandler(this.checkBox1_CheckedChanged);
            // 
            // button1
            // 
            this.button1.Enabled = false;
            this.button1.Location = new System.Drawing.Point(109, 188);
            this.button1.Name = "button1";
            this.button1.Size = new System.Drawing.Size(102, 35);
            this.button1.TabIndex = 1;
            this.button1.Text = "button1";
            this.button1.UseVisualStyleBackColor = true;
            // 
            // gbSize
            // 
            this.gbSize.Controls.Add(this.rbLarge);
            this.gbSize.Controls.Add(this.rbMedium);
            this.gbSize.Controls.Add(this.rbSmall);
            this.gbSize.Location = new System.Drawing.Point(241, 52);
            this.gbSize.Name = "gbSize";
            this.gbSize.Size = new System.Drawing.Size(175, 127);
            this.gbSize.TabIndex = 2;
            this.gbSize.TabStop = false;
            this.gbSize.Text = "Pizza Size";
            // 
            // rbSmall
            // 
            this.rbSmall.AutoSize = true;
            this.rbSmall.Location = new System.Drawing.Point(32, 31);
            this.rbSmall.Name = "rbSmall";
            this.rbSmall.Size = new System.Drawing.Size(50, 17);
            this.rbSmall.TabIndex = 0;
            this.rbSmall.TabStop = true;
            this.rbSmall.Text = "Small";
            this.rbSmall.UseVisualStyleBackColor = true;
            // 
            // rbMedium
            // 
            this.rbMedium.AutoSize = true;
            this.rbMedium.Location = new System.Drawing.Point(32, 55);
            this.rbMedium.Name = "rbMedium";
            this.rbMedium.Size = new System.Drawing.Size(62, 17);
            this.rbMedium.TabIndex = 1;
            this.rbMedium.TabStop = true;
            this.rbMedium.Text = "Medium";
            this.rbMedium.UseVisualStyleBackColor = true;
            // 
            // rbLarge
            // 
            this.rbLarge.AutoSize = true;
            this.rbLarge.Location = new System.Drawing.Point(32, 78);
            this.rbLarge.Name = "rbLarge";
            this.rbLarge.Size = new System.Drawing.Size(52, 17);
            this.rbLarge.TabIndex = 2;
            this.rbLarge.TabStop = true;
            this.rbLarge.Text = "Large";
            this.rbLarge.UseVisualStyleBackColor = true;
            // 
            // gbCrust
            // 
            this.gbCrust.Controls.Add(this.rbThick);
            this.gbCrust.Controls.Add(this.rbThin);
            this.gbCrust.Location = new System.Drawing.Point(489, 52);
            this.gbCrust.Name = "gbCrust";
            this.gbCrust.Size = new System.Drawing.Size(175, 127);
            this.gbCrust.TabIndex = 3;
            this.gbCrust.TabStop = false;
            this.gbCrust.Text = "Crust";
            // 
            // rbThick
            // 
            this.rbThick.AutoSize = true;
            this.rbThick.Location = new System.Drawing.Point(32, 55);
            this.rbThick.Name = "rbThick";
            this.rbThick.Size = new System.Drawing.Size(52, 17);
            this.rbThick.TabIndex = 1;
            this.rbThick.TabStop = true;
            this.rbThick.Text = "Thick";
            this.rbThick.UseVisualStyleBackColor = true;
            // 
            // rbThin
            // 
            this.rbThin.AutoSize = true;
            this.rbThin.Location = new System.Drawing.Point(32, 31);
            this.rbThin.Name = "rbThin";
            this.rbThin.Size = new System.Drawing.Size(46, 17);
            this.rbThin.TabIndex = 0;
            this.rbThin.TabStop = true;
            this.rbThin.Text = "Thin";
            this.rbThin.UseVisualStyleBackColor = true;
            // 
            // btnDisableSize
            // 
            this.btnDisableSize.Location = new System.Drawing.Point(241, 188);
            this.btnDisableSize.Name = "btnDisableSize";
            this.btnDisableSize.Size = new System.Drawing.Size(102, 35);
            this.btnDisableSize.TabIndex = 4;
            this.btnDisableSize.Text = "Disable Pizza Size";
            this.btnDisableSize.UseVisualStyleBackColor = true;
            this.btnDisableSize.Click += new System.EventHandler(this.btnDisableSize_Click);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.Controls.Add(this.btnDisableSize);
            this.Controls.Add(this.gbCrust);
            this.Controls.Add(this.gbSize);
            this.Controls.Add(this.button1);
            this.Controls.Add(this.chkAgree);
            this.Name = "Form1";
            this.Text = "Form1";
            this.gbSize.ResumeLayout(false);
            this.gbSize.PerformLayout();
            this.gbCrust.ResumeLayout(false);
            this.gbCrust.PerformLayout();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.CheckBox chkAgree;
        private System.Windows.Forms.Button button1;
        private System.Windows.Forms.GroupBox gbSize;
        private System.Windows.Forms.RadioButton rbLarge;
        private System.Windows.Forms.RadioButton rbMedium;
        private System.Windows.Forms.RadioButton rbSmall;
        private System.Windows.Forms.GroupBox gbCrust;
        private System.Windows.Forms.RadioButton rbThick;
        private System.Windows.Forms.RadioButton rbThin;
        private System.Windows.Forms.Button btnDisableSize;
    }
}

