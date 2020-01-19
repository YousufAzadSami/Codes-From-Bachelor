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
    public partial class Hall1Information : Form
    {
        public Hall1Information()
        {
            InitializeComponent();
        }

        private void Hall1Information_Load(object sender, EventArgs e)
        {
            // TODO: This line of code loads data into the 'cineplex_ManagementDataSet5.Hall1Information' table. You can move, or remove it, as needed.
            this.hall1InformationTableAdapter.Fill(this.cineplex_ManagementDataSet5.Hall1Information);

        }

        private void button4_Click(object sender, EventArgs e)
        {
            this.Hide();
            HallForm ob = new HallForm();
            ob.Show();
        }
    }
}
