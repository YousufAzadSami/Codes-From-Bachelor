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
    public partial class Movie : Form
    {
        //SqlConnection con = new SqlConnection("Data Source=POPPY-PC;Initial Catalog=Cineplex_Management;Integrated Security=True");
        SqlConnection con = new SqlConnection("Data Source=SAMI-PC;Initial Catalog=Cineplex_Management;Integrated Security=True");
        SqlCommand cd;
        public Movie()
        {
            InitializeComponent();
        }

        private void Movie_Load(object sender, EventArgs e)
        {
            // TODO: This line of code loads data into the 'cineplex_ManagementDataSet.movie' table. You can move, or remove it, as needed.
            this.movieTableAdapter.Fill(this.cineplex_ManagementDataSet.movie);
          

        }

        private void button1_Click(object sender, EventArgs e)
        {
            con.Open();
            cd = new SqlCommand("insert into movie values ('"+textBox1.Text+"','"+textBox2.Text
                +"','"+textBox3.Text+"','"+textBox4.Text+"')",con);
            cd.ExecuteNonQuery();
            con.Close();
            this.movieTableAdapter.Fill(this.cineplex_ManagementDataSet.movie);
        }

        private void Delete_Click(object sender, EventArgs e)
        {
            con.Open();
            cd = new SqlCommand("delete from movie where movie_name='"+textBox1.Text+"'", con);
            cd.ExecuteNonQuery();
            con.Close();
            this.movieTableAdapter.Fill(this.cineplex_ManagementDataSet.movie);
        }

        private void Update_Click(object sender, EventArgs e)
        {
            con.Open();
            cd = new SqlCommand("update movie set showtime='" + textBox2.Text
                + "',hall_no='" + textBox3.Text + "',release_date='" + textBox4.Text + "' where movie_name='"+textBox1.Text+"'", con);
            cd.ExecuteNonQuery();
            con.Close();
            this.movieTableAdapter.Fill(this.cineplex_ManagementDataSet.movie);
        }

        private void dataGridView1_CellContentClick(object sender, DataGridViewCellEventArgs e)
        {

        }

        private void button2_Click(object sender, EventArgs e)
        {
            this.Hide();
            AdminHome ob = new AdminHome();
            ob.Show();
        }


        private void displayMovieInfo(string selectedMovie)
        {
            con.Open();
            cd = new SqlCommand("select * from movie where movie_name='" + selectedMovie + "'", con);
            DataSet objDataset = new DataSet();
            SqlDataAdapter objAdapter = new SqlDataAdapter(cd);
            objAdapter.Fill(objDataset);

            string movieName = objDataset.Tables[0].Rows[0][0].ToString();
            string showTime = objDataset.Tables[0].Rows[0][1].ToString();
            string hallNo = objDataset.Tables[0].Rows[0][2].ToString();
            string releaseDate = objDataset.Tables[0].Rows[0][3].ToString();
            //string movieID = Convert.ToInt16(objDataset.Tables[0].Rows[0][4]);

            textBox1.Text = movieName;
            textBox2.Text = showTime;
            textBox3.Text = hallNo;
            textBox4.Text = releaseDate;
            // textBox5.Text = movieID;


            con.Close();


        }

        private void dataGridView1_CellClick(object sender, DataGridViewCellEventArgs e)
        {
            // j row te click kora hoilo oi row er prothom coloum mane movie name
            // ta selectedMovie e rakha hoilo
            string selectedMovie = dataGridView1.Rows[e.RowIndex].Cells[0].Value.ToString();
            // oi movie name er sob info textBox e display kora r jonno ei method
            displayMovieInfo(selectedMovie);
        }
    }
}
