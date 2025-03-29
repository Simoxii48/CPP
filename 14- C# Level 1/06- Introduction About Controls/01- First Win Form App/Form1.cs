using System;
using System.Windows.Forms;

namespace _01__First_Win_Form_App
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            textBox2.Text = textBox1.Text;
        }

        private void Mouse_Enter(object sender, EventArgs e)
        {
            textBox2.Text = textBox1.Text;
        }
    }
}
