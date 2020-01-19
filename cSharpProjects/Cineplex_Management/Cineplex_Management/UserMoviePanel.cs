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
    public partial class UserMoviePanel : Form
    {
        SqlConnection con = new SqlConnection("Data Source=POPPY-PC;Initial Catalog=Cineplex_Management;Integrated Security=True");
        SqlCommand cd;
        public UserMoviePanel()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            // TODO: This line of code loads data into the 'cineplex_ManagementDataSet2.movie' table. You can move, or remove it, as needed.
            this.movieTableAdapter.Fill(this.cineplex_ManagementDataSet2.movie);
            // TODO: This line of code loads data into the 'cineplex_ManagementDataSet2.movie' table. You can move, or remove it, as needed.
            this.movieTableAdapter.Fill(this.cineplex_ManagementDataSet2.movie);
            // TODO: This line of code loads data into the 'cineplex_ManagementDataSet2.movie' table. You can move, or remove it, as needed.
            this.movieTableAdapter.Fill(this.cineplex_ManagementDataSet2.movie);

        }
    }
}
