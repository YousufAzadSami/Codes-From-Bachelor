using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace Cineplex_Management
{
    public partial class AdminLogin : Form
    {
        public AdminLogin()
        {
            InitializeComponent();
        }

        private void label1_Click(object sender, EventArgs e)
        {

        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {
            if ((textBox1.Text) == ("Ashik"))
            {

                if (textBox2.Text.ToString().CompareTo("123") == 0)
                {
                   AdminHome ob = new AdminHome();
                    ob.Show();
                    this.Hide();

                }


                else
                {

                    MessageBox.Show("Wromg Password");
                }


            }

            else
            {

                MessageBox.Show("Wromg Password");
            }
        }

        private void button2_Click(object sender, EventArgs e)
        {
            this.Close();
        }
    }
}
