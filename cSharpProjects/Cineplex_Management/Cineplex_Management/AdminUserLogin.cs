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
    public partial class AdminUserLogin : Form
    {
        public AdminUserLogin()
        {
            InitializeComponent();
        }

        private void label1_Click(object sender, EventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {
            AdminLogin ob = new AdminLogin();
            this.Hide();
            ob.Show();
        }

        private void button2_Click(object sender, EventArgs e)
        {
            this.Hide();
            UserMoviePanel ob = new UserMoviePanel();
            ob.Show();
        }

        private void button3_Click(object sender, EventArgs e)
        {
            this.Close();
        }

        private void button4_Click(object sender, EventArgs e)
        {
            this.Hide();
            EmpLogin ob = new EmpLogin();
            ob.Show();
        }
    }
}
