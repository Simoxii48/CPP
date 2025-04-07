using System;
using System.Windows.Forms;

namespace _05__CheckBox_RadioButton_GroupBox_And_Tag
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void checkBox1_CheckedChanged(object sender, EventArgs e)
        {
            button1.Enabled = chkAgree.Checked;
        }

        private void btnDisableSize_Click(object sender, EventArgs e)
        {
            if (btnDisableSize.Text == "Disable Pizza Size")
            {
                gbSize.Enabled = false;
                btnDisableSize.Text = "Enable Pizza Size";
            }
            else
            {
                gbSize.Enabled = true;
                btnDisableSize.Text = "Disable Pizza Size";
            }

        }
    }
}
