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
    public partial class AdminHome : Form
    {
        public AdminHome()
        {
            InitializeComponent();
        }

        private void button2_Click(object sender, EventArgs e)
        {
            this.Hide();
            EmployeeForm ob = new EmployeeForm();
            ob.Show();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            Movie ob = new Movie();
            ob.Show();
            this.Hide();
        }

        private void button3_Click(object sender, EventArgs e)
        {
            this.Hide();
            ShowtimeForm ob = new ShowtimeForm();
            ob.Show();
        }

        private void button4_Click(object sender, EventArgs e)
        {
            this.Hide();
            HallForm ob = new HallForm();
            ob.Show();
        }

        private void button5_Click(object sender, EventArgs e)
        {
            this.Hide();
            AdminLogin ob = new AdminLogin();
            ob.Show();
        }
    }
}
