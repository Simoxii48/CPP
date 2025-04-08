using System.Windows.Forms;

namespace _06__Pizza_Project
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void rbSmall_CheckedChanged(object sender, System.EventArgs e)
        {
            lbSize.Text = "Small";
            lbPrice.Text = "20";
        }

        private void rbMedium_CheckedChanged(object sender, System.EventArgs e)
        {
            lbSize.Text = "Medium";
            lbPrice.Text = "30";
        }

        private void rbLarge_CheckedChanged(object sender, System.EventArgs e)
        {
            lbSize.Text = "Large";
            lbPrice.Text = "40";
        }

        private void rbThin_CheckedChanged(object sender, System.EventArgs e)
        {
            lbCrystType.Text = "Thin";
        }

        private void rbThick_CheckedChanged(object sender, System.EventArgs e)
        {
            lbCrystType.Text = "Thick";
        }

        private void rbEatIn_CheckedChanged(object sender, System.EventArgs e)
        {
            lbWhereToEat.Text = "Eat In";
        }

        private void rbEatOut_CheckedChanged(object sender, System.EventArgs e)
        {
            lbWhereToEat.Text = "Eat Out";
        }

        private void chkExtraCheese_CheckedChanged(object sender, System.EventArgs e)
        {

        }

        private void chkMushrooms_CheckedChanged(object sender, System.EventArgs e)
        {

        }

        private void chkTomatoes_CheckedChanged(object sender, System.EventArgs e)
        {

        }

        private void chkOnions_CheckedChanged(object sender, System.EventArgs e)
        {

        }

        private void chkOlives_CheckedChanged(object sender, System.EventArgs e)
        {

        }

        private void chkGreenPeppers_CheckedChanged(object sender, System.EventArgs e)
        {

        }
    }
}
