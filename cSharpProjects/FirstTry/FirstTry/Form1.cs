using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace FirstTry
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void newBUTTON_Click(object sender, EventArgs e)
        {

        }

        private void Form1_Load(object sender, EventArgs e)
        {
            // TODO: This line of code loads data into the 'cineplex_ManagementDataSet.movie' table. You can move, or remove it, as needed.
            this.movieTableAdapter.Fill(this.cineplex_ManagementDataSet.movie);

        }
    }
}
