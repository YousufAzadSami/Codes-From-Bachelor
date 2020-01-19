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
    public partial class EmployeeForm : Form
    {
        public EmployeeForm()
        {
            InitializeComponent();
        }

        private void button3_Click(object sender, EventArgs e)
        {
            this.Hide();
            AdminHome ob = new AdminHome();
            ob.Show();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            this.Hide();
            CashierForm ob = new CashierForm();
            ob.Show();
        }

        private void button2_Click(object sender, EventArgs e)
        {
            this.Hide();
            HallMaintainerForm ob = new HallMaintainerForm();
            ob.Show();
        }
    }
}
