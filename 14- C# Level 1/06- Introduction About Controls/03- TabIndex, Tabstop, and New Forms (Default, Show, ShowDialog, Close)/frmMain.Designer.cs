namespace _03__Some_Formatting___Alignements
{
    partial class frmMain
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
            this.btnShowMain = new System.Windows.Forms.Button();
            this.btnShowMainDialog = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // btnShowMain
            // 
            this.btnShowMain.Location = new System.Drawing.Point(52, 72);
            this.btnShowMain.Name = "btnShowMain";
            this.btnShowMain.Size = new System.Drawing.Size(111, 39);
            this.btnShowMain.TabIndex = 0;
            this.btnShowMain.Text = "Show Main Form";
            this.btnShowMain.UseVisualStyleBackColor = true;
            this.btnShowMain.Click += new System.EventHandler(this.btnShowMain_Click);
            // 
            // btnShowMainDialog
            // 
            this.btnShowMainDialog.Location = new System.Drawing.Point(52, 145);
            this.btnShowMainDialog.Name = "btnShowMainDialog";
            this.btnShowMainDialog.Size = new System.Drawing.Size(111, 63);
            this.btnShowMainDialog.TabIndex = 1;
            this.btnShowMainDialog.Text = "Show Main Form As Dialog";
            this.btnShowMainDialog.UseVisualStyleBackColor = true;
            this.btnShowMainDialog.Click += new System.EventHandler(this.btnShowMainDialog_Click);
            // 
            // frmMain
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.Controls.Add(this.btnShowMainDialog);
            this.Controls.Add(this.btnShowMain);
            this.Name = "frmMain";
            this.Text = "Form2";
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.Button btnShowMain;
        private System.Windows.Forms.Button btnShowMainDialog;
    }
}