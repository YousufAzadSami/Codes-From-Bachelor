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
    public partial class HallMaintainerForm : Form
    {
        SqlConnection con = new SqlConnection("Data Source=SAMI-PC;Initial Catalog=Cineplex_Management;Integrated Security=True");
        SqlCommand cd;
        public HallMaintainerForm()
        {
            InitializeComponent();
        }

        private void HallMaintainerForm_Load(object sender, EventArgs e)
        {
            // TODO: This line of code loads data into the 'cineplex_ManagementDataSet4.HallMaintainer' table. You can move, or remove it, as needed.
            this.hallMaintainerTableAdapter.Fill(this.cineplex_ManagementDataSet4.HallMaintainer);
           

        }

        private void button1_Click(object sender, EventArgs e)
        {
            con.Open();
            cd = new SqlCommand("insert into HallMaintainer values ('" + textBox2.Text + "','" + textBox3.Text
                + "','" + textBox4.Text + "','" + textBox5.Text + "','" + textBox6.Text + "')", con);
            cd.ExecuteNonQuery();
            con.Close();
            this.hallMaintainerTableAdapter.Fill(this.cineplex_ManagementDataSet4.HallMaintainer);
        }

        private void button4_Click(object sender, EventArgs e)
        {
            this.Hide();
            EmployeeForm ob = new EmployeeForm();
            ob.Show();
        }

        private void button2_Click(object sender, EventArgs e)
        {
            con.Open();
            cd = new SqlCommand("delete from HallMaintainer where EmployeeId='" + textBox2.Text + "'", con);
            cd.ExecuteNonQuery();
            con.Close();
            this.hallMaintainerTableAdapter.Fill(this.cineplex_ManagementDataSet4.HallMaintainer);
        }

        private void button3_Click(object sender, EventArgs e)
        {
            con.Open();
            cd = new SqlCommand("update HallMaintainer set name='" + textBox3.Text
                + "',salary='" + textBox4.Text +
                "',Age='" + textBox5.Text +
                "',hallNo='" + textBox6.Text +
                "' where EmployeeId='" + textBox2.Text + "'", con);
  

            cd.ExecuteNonQuery();
            con.Close();
            this.hallMaintainerTableAdapter.Fill(this.cineplex_ManagementDataSet4.HallMaintainer);
        }
        private void displayMovieInfo(string selectedEmployeeID)
        {
            con.Open();
            cd = new SqlCommand("select * from HallMaintainer where employeeId ='" + selectedEmployeeID + "'", con);
            DataSet objDataset = new DataSet();
            SqlDataAdapter objAdapter = new SqlDataAdapter(cd);
            objAdapter.Fill(objDataset);

            string EmpolyeeId = objDataset.Tables[0].Rows[0][0].ToString();
            string Name = objDataset.Tables[0].Rows[0][1].ToString();
            string Salary = objDataset.Tables[0].Rows[0][2].ToString();
            string Age = objDataset.Tables[0].Rows[0][3].ToString();
            string counterNo = objDataset.Tables[0].Rows[0][4].ToString();
            //string movieID = Convert.ToInt16(objDataset.Tables[0].Rows[0][4]);

            textBox2.Text = EmpolyeeId;
            textBox3.Text = Name;
            textBox4.Text = Salary;
            textBox5.Text = Age;
            textBox6.Text = counterNo;


            con.Close();


        }

        private void dataGridView1_CellClick(object sender, DataGridViewCellEventArgs e)
        {
            // j row te click kora hoilo oi row er prothom coloum mane movie name
            // ta selectedMovie e rakha hoilo
            string selectedEmployeeID = dataGridView1.Rows[e.RowIndex].Cells[0].Value.ToString();
            // oi movie name er sob info textBox e display kora r jonno ei method
            displayMovieInfo(selectedEmployeeID);
        }
    }
}
