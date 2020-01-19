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
    public partial class EmpLogin : Form
    {
        public EmpLogin()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            this.Hide();
            AdminUserLogin ob = new AdminUserLogin();
            ob.Show();
        }

        private void button2_Click(object sender, EventArgs e)
        {
            if ((textBox1.Text) == ("Sami"))
            {

                if (textBox2.Text.ToString().CompareTo("123") == 0)
                {
                    SellTicketForm ob = new SellTicketForm();
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
    }
}
