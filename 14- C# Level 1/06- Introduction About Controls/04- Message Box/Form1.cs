using System;
using System.Windows.Forms;

namespace _04__Message_Box
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void btnMessageBoxForm_Click(object sender, EventArgs e)
        {
            Form fr = new frmMessageBox();
            fr.ShowDialog();
        }
    }
}
