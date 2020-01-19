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
    public partial class CashierForm : Form
    {

        //SqlConnection con = new SqlConnection("Data Source=POPPY-PC;Initial Catalog=Cineplex_Management;Integrated Security=True");
        SqlConnection con = new SqlConnection("Data Source=SAMI-PC;Initial Catalog=Cineplex_Management;Integrated Security=True");
        SqlCommand cd;
        public CashierForm()
        {
            InitializeComponent();
        }

        private void CashierForm_Load(object sender, EventArgs e)
        {
            // TODO: This line of code loads data into the 'cineplex_ManagementDataSet3.Cashier' table. You can move, or remove it, as needed.
            this.cashierTableAdapter.Fill(this.cineplex_ManagementDataSet3.Cashier);
            // TODO: This line of code loads data into the 'cineplex_ManagementDataSet3.Cashier' table. You can move, or remove it, as needed.
            this.cashierTableAdapter.Fill(this.cineplex_ManagementDataSet3.Cashier);

        }

        private void button1_Click(object sender, EventArgs e)
        {
            con.Open();
            cd = new SqlCommand("insert into cashier values ('" + textBox1.Text + "','" + textBox2.Text
                + "','" + textBox3.Text + "','" + textBox4.Text + "','" + textBox5.Text + "')", con);
            cd.ExecuteNonQuery();
            con.Close();
            this.cashierTableAdapter.Fill(this.cineplex_ManagementDataSet3.Cashier);
        }

        private void button2_Click(object sender, EventArgs e)
        {
            con.Open();
            cd = new SqlCommand("delete from cashier where empolyeeId='" + textBox1.Text + "'", con);
            cd.ExecuteNonQuery();
            con.Close();
            this.cashierTableAdapter.Fill(this.cineplex_ManagementDataSet3.Cashier);
        }

        private void button4_Click(object sender, EventArgs e)
        {
            this.Hide();
            EmployeeForm ob = new EmployeeForm();
            ob.Show();
        }

        private void button3_Click(object sender, EventArgs e)
        {
            con.Open();
            cd = new SqlCommand("update cashier set name='" + textBox2.Text
                + "',salary='" + textBox3.Text +
                "',Age='" + textBox4.Text +
                "',counterNo='" + textBox5.Text +
                "' where empolyeeId='" + textBox1.Text + "'", con);
            /*
             * cd = new SqlCommand("update cashier set name='" + textBox2.Text
                + "',salary='" + textBox3.Text + "',release_date='" + textBox4.Text + "' where employeeId='" + textBox1.Text + "'", con);
             * */

            cd.ExecuteNonQuery();
            con.Close();

            this.cashierTableAdapter.Fill(this.cineplex_ManagementDataSet3.Cashier);            
        }

        private void label3_Click(object sender, EventArgs e)
        {

        }

        private void dataGridView1_CellClick(object sender, DataGridViewCellEventArgs e)
        {
            // j row te click kora hoilo oi row er prothom coloum mane movie name
            // ta selectedMovie e rakha hoilo
            string selectedCashierID = dataGridView1.Rows[e.RowIndex].Cells[0].Value.ToString();
            // oi movie name er sob info textBox e display kora r jonno ei method
            displayMovieInfo(selectedCashierID);
        }
        private void displayMovieInfo(string selectedEmployeeID)
        {
            con.Open();
            cd = new SqlCommand("select * from Cashier where empolyeeId ='" + selectedEmployeeID + "'", con);
            DataSet objDataset = new DataSet();
            SqlDataAdapter objAdapter = new SqlDataAdapter(cd);
            objAdapter.Fill(objDataset);

            string EmpolyeeId = objDataset.Tables[0].Rows[0][0].ToString();
            string Name = objDataset.Tables[0].Rows[0][1].ToString();
            string Salary = objDataset.Tables[0].Rows[0][2].ToString();
            string Age = objDataset.Tables[0].Rows[0][3].ToString();
            string counterNo = objDataset.Tables[0].Rows[0][4].ToString();
            //string movieID = Convert.ToInt16(objDataset.Tables[0].Rows[0][4]);

            textBox1.Text = EmpolyeeId;
            textBox2.Text = Name;
            textBox3.Text = Salary;
            textBox4.Text = Age;
            textBox5.Text = counterNo;


            con.Close();


        }

        private void dataGridView1_CellContentClick(object sender, DataGridViewCellEventArgs e)
        {

        }
    }
}
