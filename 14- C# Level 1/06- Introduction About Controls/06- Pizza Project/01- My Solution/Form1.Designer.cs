namespace _06__Pizza_Project
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
            this.label1 = new System.Windows.Forms.Label();
            this.gbSize = new System.Windows.Forms.GroupBox();
            this.rbLarge = new System.Windows.Forms.RadioButton();
            this.rbMedium = new System.Windows.Forms.RadioButton();
            this.rbSmall = new System.Windows.Forms.RadioButton();
            this.gbCrust = new System.Windows.Forms.GroupBox();
            this.rbThick = new System.Windows.Forms.RadioButton();
            this.rbThin = new System.Windows.Forms.RadioButton();
            this.gbToppings = new System.Windows.Forms.GroupBox();
            this.chkGreenPeppers = new System.Windows.Forms.CheckBox();
            this.chkOlives = new System.Windows.Forms.CheckBox();
            this.chkOnions = new System.Windows.Forms.CheckBox();
            this.chkTomatoes = new System.Windows.Forms.CheckBox();
            this.chkMushrooms = new System.Windows.Forms.CheckBox();
            this.chkExtraCheese = new System.Windows.Forms.CheckBox();
            this.gbWhereToEat = new System.Windows.Forms.GroupBox();
            this.rbEatOut = new System.Windows.Forms.RadioButton();
            this.rbEatIn = new System.Windows.Forms.RadioButton();
            this.gbOrderSummary = new System.Windows.Forms.GroupBox();
            this.lbSize = new System.Windows.Forms.Label();
            this.label44 = new System.Windows.Forms.Label();
            this.label11 = new System.Windows.Forms.Label();
            this.label00 = new System.Windows.Forms.Label();
            this.label22 = new System.Windows.Forms.Label();
            this.label0 = new System.Windows.Forms.Label();
            this.btnOrder = new System.Windows.Forms.Button();
            this.btnReset = new System.Windows.Forms.Button();
            this.lbCrystType = new System.Windows.Forms.Label();
            this.lbWhereToEat = new System.Windows.Forms.Label();
            this.lbPrice = new System.Windows.Forms.Label();
            this.lbToppings = new System.Windows.Forms.Label();
            this.lbToppings2 = new System.Windows.Forms.Label();
            this.label2 = new System.Windows.Forms.Label();
            this.gbSize.SuspendLayout();
            this.gbCrust.SuspendLayout();
            this.gbToppings.SuspendLayout();
            this.gbWhereToEat.SuspendLayout();
            this.gbOrderSummary.SuspendLayout();
            this.SuspendLayout();
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Font = new System.Drawing.Font("Comic Sans MS", 24F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label1.ForeColor = System.Drawing.Color.IndianRed;
            this.label1.Location = new System.Drawing.Point(274, 24);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(264, 45);
            this.label1.TabIndex = 0;
            this.label1.Text = "Make Your Pizza";
            // 
            // gbSize
            // 
            this.gbSize.Controls.Add(this.rbLarge);
            this.gbSize.Controls.Add(this.rbMedium);
            this.gbSize.Controls.Add(this.rbSmall);
            this.gbSize.Location = new System.Drawing.Point(23, 82);
            this.gbSize.Name = "gbSize";
            this.gbSize.Size = new System.Drawing.Size(155, 136);
            this.gbSize.TabIndex = 1;
            this.gbSize.TabStop = false;
            this.gbSize.Text = "Size";
            // 
            // rbLarge
            // 
            this.rbLarge.AutoSize = true;
            this.rbLarge.Location = new System.Drawing.Point(27, 96);
            this.rbLarge.Name = "rbLarge";
            this.rbLarge.Size = new System.Drawing.Size(52, 17);
            this.rbLarge.TabIndex = 2;
            this.rbLarge.TabStop = true;
            this.rbLarge.Text = "Large";
            this.rbLarge.UseVisualStyleBackColor = true;
            this.rbLarge.CheckedChanged += new System.EventHandler(this.rbLarge_CheckedChanged);
            // 
            // rbMedium
            // 
            this.rbMedium.AutoSize = true;
            this.rbMedium.Location = new System.Drawing.Point(27, 69);
            this.rbMedium.Name = "rbMedium";
            this.rbMedium.Size = new System.Drawing.Size(62, 17);
            this.rbMedium.TabIndex = 1;
            this.rbMedium.TabStop = true;
            this.rbMedium.Text = "Medium";
            this.rbMedium.UseVisualStyleBackColor = true;
            this.rbMedium.CheckedChanged += new System.EventHandler(this.rbMedium_CheckedChanged);
            // 
            // rbSmall
            // 
            this.rbSmall.AutoSize = true;
            this.rbSmall.Location = new System.Drawing.Point(27, 42);
            this.rbSmall.Name = "rbSmall";
            this.rbSmall.Size = new System.Drawing.Size(50, 17);
            this.rbSmall.TabIndex = 0;
            this.rbSmall.TabStop = true;
            this.rbSmall.Text = "Small";
            this.rbSmall.UseVisualStyleBackColor = true;
            this.rbSmall.CheckedChanged += new System.EventHandler(this.rbSmall_CheckedChanged);
            // 
            // gbCrust
            // 
            this.gbCrust.Controls.Add(this.rbThick);
            this.gbCrust.Controls.Add(this.rbThin);
            this.gbCrust.Location = new System.Drawing.Point(23, 224);
            this.gbCrust.Name = "gbCrust";
            this.gbCrust.Size = new System.Drawing.Size(155, 136);
            this.gbCrust.TabIndex = 3;
            this.gbCrust.TabStop = false;
            this.gbCrust.Text = "Crust Type";
            // 
            // rbThick
            // 
            this.rbThick.AutoSize = true;
            this.rbThick.Location = new System.Drawing.Point(27, 69);
            this.rbThick.Name = "rbThick";
            this.rbThick.Size = new System.Drawing.Size(79, 17);
            this.rbThick.TabIndex = 1;
            this.rbThick.TabStop = true;
            this.rbThick.Text = "Thick Crust";
            this.rbThick.UseVisualStyleBackColor = true;
            this.rbThick.CheckedChanged += new System.EventHandler(this.rbThick_CheckedChanged);
            // 
            // rbThin
            // 
            this.rbThin.AutoSize = true;
            this.rbThin.Location = new System.Drawing.Point(27, 42);
            this.rbThin.Name = "rbThin";
            this.rbThin.Size = new System.Drawing.Size(73, 17);
            this.rbThin.TabIndex = 0;
            this.rbThin.TabStop = true;
            this.rbThin.Text = "Thin Crust";
            this.rbThin.UseVisualStyleBackColor = true;
            this.rbThin.CheckedChanged += new System.EventHandler(this.rbThin_CheckedChanged);
            // 
            // gbToppings
            // 
            this.gbToppings.Controls.Add(this.chkGreenPeppers);
            this.gbToppings.Controls.Add(this.chkOlives);
            this.gbToppings.Controls.Add(this.chkOnions);
            this.gbToppings.Controls.Add(this.chkTomatoes);
            this.gbToppings.Controls.Add(this.chkMushrooms);
            this.gbToppings.Controls.Add(this.chkExtraCheese);
            this.gbToppings.Location = new System.Drawing.Point(272, 84);
            this.gbToppings.Name = "gbToppings";
            this.gbToppings.Size = new System.Drawing.Size(228, 134);
            this.gbToppings.TabIndex = 4;
            this.gbToppings.TabStop = false;
            this.gbToppings.Text = "Toppings";
            // 
            // chkGreenPeppers
            // 
            this.chkGreenPeppers.AutoSize = true;
            this.chkGreenPeppers.Location = new System.Drawing.Point(123, 85);
            this.chkGreenPeppers.Name = "chkGreenPeppers";
            this.chkGreenPeppers.Size = new System.Drawing.Size(97, 17);
            this.chkGreenPeppers.TabIndex = 5;
            this.chkGreenPeppers.Text = "Green Peppers";
            this.chkGreenPeppers.UseVisualStyleBackColor = true;
            this.chkGreenPeppers.CheckedChanged += new System.EventHandler(this.chkGreenPeppers_CheckedChanged);
            // 
            // chkOlives
            // 
            this.chkOlives.AutoSize = true;
            this.chkOlives.Location = new System.Drawing.Point(123, 53);
            this.chkOlives.Name = "chkOlives";
            this.chkOlives.Size = new System.Drawing.Size(55, 17);
            this.chkOlives.TabIndex = 4;
            this.chkOlives.Text = "Olives";
            this.chkOlives.UseVisualStyleBackColor = true;
            this.chkOlives.CheckedChanged += new System.EventHandler(this.chkOlives_CheckedChanged);
            // 
            // chkOnions
            // 
            this.chkOnions.AutoSize = true;
            this.chkOnions.Location = new System.Drawing.Point(123, 19);
            this.chkOnions.Name = "chkOnions";
            this.chkOnions.Size = new System.Drawing.Size(59, 17);
            this.chkOnions.TabIndex = 3;
            this.chkOnions.Text = "Onions";
            this.chkOnions.UseVisualStyleBackColor = true;
            this.chkOnions.CheckedChanged += new System.EventHandler(this.chkOnions_CheckedChanged);
            // 
            // chkTomatoes
            // 
            this.chkTomatoes.AutoSize = true;
            this.chkTomatoes.Location = new System.Drawing.Point(10, 85);
            this.chkTomatoes.Name = "chkTomatoes";
            this.chkTomatoes.Size = new System.Drawing.Size(73, 17);
            this.chkTomatoes.TabIndex = 2;
            this.chkTomatoes.Text = "Tomatoes";
            this.chkTomatoes.UseVisualStyleBackColor = true;
            this.chkTomatoes.CheckedChanged += new System.EventHandler(this.chkTomatoes_CheckedChanged);
            // 
            // chkMushrooms
            // 
            this.chkMushrooms.AutoSize = true;
            this.chkMushrooms.Location = new System.Drawing.Point(10, 53);
            this.chkMushrooms.Name = "chkMushrooms";
            this.chkMushrooms.Size = new System.Drawing.Size(80, 17);
            this.chkMushrooms.TabIndex = 1;
            this.chkMushrooms.Text = "Mushrooms";
            this.chkMushrooms.UseVisualStyleBackColor = true;
            this.chkMushrooms.CheckedChanged += new System.EventHandler(this.chkMushrooms_CheckedChanged);
            // 
            // chkExtraCheese
            // 
            this.chkExtraCheese.AutoSize = true;
            this.chkExtraCheese.Location = new System.Drawing.Point(10, 19);
            this.chkExtraCheese.Name = "chkExtraCheese";
            this.chkExtraCheese.Size = new System.Drawing.Size(89, 17);
            this.chkExtraCheese.TabIndex = 0;
            this.chkExtraCheese.Text = "Extra Cheese";
            this.chkExtraCheese.UseVisualStyleBackColor = true;
            this.chkExtraCheese.CheckedChanged += new System.EventHandler(this.chkExtraCheese_CheckedChanged);
            // 
            // gbWhereToEat
            // 
            this.gbWhereToEat.Controls.Add(this.rbEatOut);
            this.gbWhereToEat.Controls.Add(this.rbEatIn);
            this.gbWhereToEat.Location = new System.Drawing.Point(272, 224);
            this.gbWhereToEat.Name = "gbWhereToEat";
            this.gbWhereToEat.Size = new System.Drawing.Size(228, 136);
            this.gbWhereToEat.TabIndex = 5;
            this.gbWhereToEat.TabStop = false;
            this.gbWhereToEat.Text = "Where To Eat";
            // 
            // rbEatOut
            // 
            this.rbEatOut.AutoSize = true;
            this.rbEatOut.Location = new System.Drawing.Point(123, 29);
            this.rbEatOut.Name = "rbEatOut";
            this.rbEatOut.Size = new System.Drawing.Size(61, 17);
            this.rbEatOut.TabIndex = 7;
            this.rbEatOut.TabStop = true;
            this.rbEatOut.Text = "Eat Out";
            this.rbEatOut.UseVisualStyleBackColor = true;
            this.rbEatOut.CheckedChanged += new System.EventHandler(this.rbEatOut_CheckedChanged);
            // 
            // rbEatIn
            // 
            this.rbEatIn.AutoSize = true;
            this.rbEatIn.Location = new System.Drawing.Point(14, 29);
            this.rbEatIn.Name = "rbEatIn";
            this.rbEatIn.Size = new System.Drawing.Size(53, 17);
            this.rbEatIn.TabIndex = 6;
            this.rbEatIn.TabStop = true;
            this.rbEatIn.Text = "Eat In";
            this.rbEatIn.UseVisualStyleBackColor = true;
            this.rbEatIn.CheckedChanged += new System.EventHandler(this.rbEatIn_CheckedChanged);
            // 
            // gbOrderSummary
            // 
            this.gbOrderSummary.Controls.Add(this.label2);
            this.gbOrderSummary.Controls.Add(this.lbToppings2);
            this.gbOrderSummary.Controls.Add(this.lbToppings);
            this.gbOrderSummary.Controls.Add(this.lbPrice);
            this.gbOrderSummary.Controls.Add(this.lbWhereToEat);
            this.gbOrderSummary.Controls.Add(this.lbCrystType);
            this.gbOrderSummary.Controls.Add(this.lbSize);
            this.gbOrderSummary.Controls.Add(this.label44);
            this.gbOrderSummary.Controls.Add(this.label11);
            this.gbOrderSummary.Controls.Add(this.label00);
            this.gbOrderSummary.Controls.Add(this.label22);
            this.gbOrderSummary.Controls.Add(this.label0);
            this.gbOrderSummary.Location = new System.Drawing.Point(516, 86);
            this.gbOrderSummary.Name = "gbOrderSummary";
            this.gbOrderSummary.Size = new System.Drawing.Size(272, 352);
            this.gbOrderSummary.TabIndex = 6;
            this.gbOrderSummary.TabStop = false;
            this.gbOrderSummary.Text = "Order Summary";
            // 
            // lbSize
            // 
            this.lbSize.AutoSize = true;
            this.lbSize.Font = new System.Drawing.Font("Microsoft Sans Serif", 9.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.lbSize.Location = new System.Drawing.Point(86, 43);
            this.lbSize.Name = "lbSize";
            this.lbSize.Size = new System.Drawing.Size(0, 16);
            this.lbSize.TabIndex = 1;
            // 
            // label44
            // 
            this.label44.AutoSize = true;
            this.label44.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label44.Location = new System.Drawing.Point(15, 254);
            this.label44.Name = "label44";
            this.label44.Size = new System.Drawing.Size(104, 20);
            this.label44.TabIndex = 9;
            this.label44.Text = "Total Price :";
            // 
            // label11
            // 
            this.label11.AutoSize = true;
            this.label11.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label11.Location = new System.Drawing.Point(16, 207);
            this.label11.Name = "label11";
            this.label11.Size = new System.Drawing.Size(119, 20);
            this.label11.TabIndex = 7;
            this.label11.Text = "WhereToEat :";
            // 
            // label00
            // 
            this.label00.AutoSize = true;
            this.label00.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label00.Location = new System.Drawing.Point(16, 167);
            this.label00.Name = "label00";
            this.label00.Size = new System.Drawing.Size(105, 20);
            this.label00.TabIndex = 5;
            this.label00.Text = "Crust Type :";
            // 
            // label22
            // 
            this.label22.AutoSize = true;
            this.label22.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label22.Location = new System.Drawing.Point(16, 83);
            this.label22.Name = "label22";
            this.label22.Size = new System.Drawing.Size(92, 20);
            this.label22.TabIndex = 2;
            this.label22.Text = "Toppings :";
            // 
            // label0
            // 
            this.label0.AutoSize = true;
            this.label0.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label0.Location = new System.Drawing.Point(15, 38);
            this.label0.Name = "label0";
            this.label0.Size = new System.Drawing.Size(54, 20);
            this.label0.TabIndex = 0;
            this.label0.Text = "Size :";
            // 
            // btnOrder
            // 
            this.btnOrder.Location = new System.Drawing.Point(272, 393);
            this.btnOrder.Name = "btnOrder";
            this.btnOrder.Size = new System.Drawing.Size(99, 30);
            this.btnOrder.TabIndex = 7;
            this.btnOrder.Text = "Order Pizza";
            this.btnOrder.UseVisualStyleBackColor = true;
            // 
            // btnReset
            // 
            this.btnReset.Location = new System.Drawing.Point(401, 393);
            this.btnReset.Name = "btnReset";
            this.btnReset.Size = new System.Drawing.Size(99, 30);
            this.btnReset.TabIndex = 8;
            this.btnReset.Text = "Reset Form";
            this.btnReset.UseVisualStyleBackColor = true;
            // 
            // lbCrystType
            // 
            this.lbCrystType.AutoSize = true;
            this.lbCrystType.Font = new System.Drawing.Font("Microsoft Sans Serif", 9.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.lbCrystType.Location = new System.Drawing.Point(135, 167);
            this.lbCrystType.Name = "lbCrystType";
            this.lbCrystType.Size = new System.Drawing.Size(0, 16);
            this.lbCrystType.TabIndex = 6;
            // 
            // lbWhereToEat
            // 
            this.lbWhereToEat.AutoSize = true;
            this.lbWhereToEat.Font = new System.Drawing.Font("Microsoft Sans Serif", 9.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.lbWhereToEat.Location = new System.Drawing.Point(141, 207);
            this.lbWhereToEat.Name = "lbWhereToEat";
            this.lbWhereToEat.Size = new System.Drawing.Size(0, 16);
            this.lbWhereToEat.TabIndex = 8;
            // 
            // lbPrice
            // 
            this.lbPrice.AutoSize = true;
            this.lbPrice.Font = new System.Drawing.Font("Segoe Script", 36F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.lbPrice.ForeColor = System.Drawing.Color.Lime;
            this.lbPrice.Location = new System.Drawing.Point(106, 274);
            this.lbPrice.Name = "lbPrice";
            this.lbPrice.Size = new System.Drawing.Size(102, 76);
            this.lbPrice.TabIndex = 10;
            this.lbPrice.Text = "20";
            // 
            // lbToppings
            // 
            this.lbToppings.AutoSize = true;
            this.lbToppings.Font = new System.Drawing.Font("Microsoft Sans Serif", 9.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.lbToppings.Location = new System.Drawing.Point(17, 119);
            this.lbToppings.Name = "lbToppings";
            this.lbToppings.Size = new System.Drawing.Size(0, 16);
            this.lbToppings.TabIndex = 3;
            // 
            // lbToppings2
            // 
            this.lbToppings2.AutoSize = true;
            this.lbToppings2.Font = new System.Drawing.Font("Microsoft Sans Serif", 9.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.lbToppings2.Location = new System.Drawing.Point(17, 143);
            this.lbToppings2.Name = "lbToppings2";
            this.lbToppings2.Size = new System.Drawing.Size(0, 16);
            this.lbToppings2.TabIndex = 4;
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Font = new System.Drawing.Font("Segoe Script", 36F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label2.ForeColor = System.Drawing.Color.Lime;
            this.label2.Location = new System.Drawing.Point(209, 273);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(58, 76);
            this.label2.TabIndex = 11;
            this.label2.Text = "$";
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.Controls.Add(this.btnReset);
            this.Controls.Add(this.btnOrder);
            this.Controls.Add(this.gbOrderSummary);
            this.Controls.Add(this.gbWhereToEat);
            this.Controls.Add(this.gbToppings);
            this.Controls.Add(this.gbCrust);
            this.Controls.Add(this.gbSize);
            this.Controls.Add(this.label1);
            this.Name = "Form1";
            this.Text = "Pizza Order";
            this.gbSize.ResumeLayout(false);
            this.gbSize.PerformLayout();
            this.gbCrust.ResumeLayout(false);
            this.gbCrust.PerformLayout();
            this.gbToppings.ResumeLayout(false);
            this.gbToppings.PerformLayout();
            this.gbWhereToEat.ResumeLayout(false);
            this.gbWhereToEat.PerformLayout();
            this.gbOrderSummary.ResumeLayout(false);
            this.gbOrderSummary.PerformLayout();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.GroupBox gbSize;
        private System.Windows.Forms.RadioButton rbLarge;
        private System.Windows.Forms.RadioButton rbMedium;
        private System.Windows.Forms.RadioButton rbSmall;
        private System.Windows.Forms.GroupBox gbCrust;
        private System.Windows.Forms.RadioButton rbThick;
        private System.Windows.Forms.RadioButton rbThin;
        private System.Windows.Forms.GroupBox gbToppings;
        private System.Windows.Forms.CheckBox chkGreenPeppers;
        private System.Windows.Forms.CheckBox chkOlives;
        private System.Windows.Forms.CheckBox chkOnions;
        private System.Windows.Forms.CheckBox chkTomatoes;
        private System.Windows.Forms.CheckBox chkMushrooms;
        private System.Windows.Forms.CheckBox chkExtraCheese;
        private System.Windows.Forms.GroupBox gbWhereToEat;
        private System.Windows.Forms.RadioButton rbEatOut;
        private System.Windows.Forms.RadioButton rbEatIn;
        private System.Windows.Forms.GroupBox gbOrderSummary;
        private System.Windows.Forms.Label label0;
        private System.Windows.Forms.Label label44;
        private System.Windows.Forms.Label label11;
        private System.Windows.Forms.Label label00;
        private System.Windows.Forms.Label label22;
        private System.Windows.Forms.Button btnOrder;
        private System.Windows.Forms.Button btnReset;
        private System.Windows.Forms.Label lbSize;
        private System.Windows.Forms.Label lbCrystType;
        private System.Windows.Forms.Label lbWhereToEat;
        private System.Windows.Forms.Label lbPrice;
        private System.Windows.Forms.Label lbToppings;
        private System.Windows.Forms.Label lbToppings2;
        private System.Windows.Forms.Label label2;
    }
}

