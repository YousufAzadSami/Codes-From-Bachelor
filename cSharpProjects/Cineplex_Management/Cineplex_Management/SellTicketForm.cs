using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;
using System.Data.SqlClient;

namespace Cineplex_Management
{
    public partial class SellTicketForm : Form
    {
        SqlConnection con = new SqlConnection("Data Source=SAMI-PC;Initial Catalog=Cineplex_Management;Integrated Security=True");
        SqlCommand cd;
        public SellTicketForm()
        {
            InitializeComponent();
        }

        private void label2_Click(object sender, EventArgs e)
        {

        }

        private void Bill_Load(object sender, EventArgs e)
        {

        }

        private void label1_Click(object sender, EventArgs e)
        {

        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {

        }

        private void radioButton3_CheckedChanged(object sender, EventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {
            this.Hide();
            EmpLogin ob = new EmpLogin();
            ob.Show();
        }

        private void comboBox2_SelectedIndexChanged(object sender, EventArgs e)
        {

        }

        private void radioButton4_CheckedChanged(object sender, EventArgs e)
        {

        }

        private void checkBox2_CheckedChanged(object sender, EventArgs e)
        {

        }

        private void checkBox1_CheckedChanged(object sender, EventArgs e)
        {

        }

        private void label6_Click(object sender, EventArgs e)
        {

        }

        private void label3_Click(object sender, EventArgs e)
        {

        }

        private void comboBox1_SelectedIndexChanged(object sender, EventArgs e)
        {

        }

        private void button2_Click(object sender, EventArgs e)
        {
            string ticketID = "";
            string ticketClass = "";
            if (radioButton1.Checked)
            {
                ticketClass = "premium";
            }
            else { 
                ticketClass = "regular";
            }
            string date =  dateTimePicker1.Value.ToString("yyyy-MM-dd");
            string showTime = comboBox2.Text;
            string movieName = comboBox1.Text;
            string sitNo = textBox1.Text;


        }

    }
}
