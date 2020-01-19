namespace Cineplex_Management
{
    partial class UserMoviePanel
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.components = new System.ComponentModel.Container();
            this.dataGridView1 = new System.Windows.Forms.DataGridView();
            this.cineplex_ManagementDataSet2 = new Cineplex_Management.Cineplex_ManagementDataSet2();
            this.movieBindingSource = new System.Windows.Forms.BindingSource(this.components);
            this.movieTableAdapter = new Cineplex_Management.Cineplex_ManagementDataSet2TableAdapters.movieTableAdapter();
            this.movieNameDataGridViewTextBoxColumn = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.showtimeDataGridViewTextBoxColumn = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.hallNoDataGridViewTextBoxColumn = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.releaseDateDataGridViewTextBoxColumn = new System.Windows.Forms.DataGridViewTextBoxColumn();
            ((System.ComponentModel.ISupportInitialize)(this.dataGridView1)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.cineplex_ManagementDataSet2)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.movieBindingSource)).BeginInit();
            this.SuspendLayout();
            // 
            // dataGridView1
            // 
            this.dataGridView1.AutoGenerateColumns = false;
            this.dataGridView1.ColumnHeadersHeightSizeMode = System.Windows.Forms.DataGridViewColumnHeadersHeightSizeMode.AutoSize;
            this.dataGridView1.Columns.AddRange(new System.Windows.Forms.DataGridViewColumn[] {
            this.movieNameDataGridViewTextBoxColumn,
            this.showtimeDataGridViewTextBoxColumn,
            this.hallNoDataGridViewTextBoxColumn,
            this.releaseDateDataGridViewTextBoxColumn});
            this.dataGridView1.DataSource = this.movieBindingSource;
            this.dataGridView1.Location = new System.Drawing.Point(74, 131);
            this.dataGridView1.Name = "dataGridView1";
            this.dataGridView1.Size = new System.Drawing.Size(494, 150);
            this.dataGridView1.TabIndex = 0;
            // 
            // cineplex_ManagementDataSet2
            // 
            this.cineplex_ManagementDataSet2.DataSetName = "Cineplex_ManagementDataSet2";
            this.cineplex_ManagementDataSet2.SchemaSerializationMode = System.Data.SchemaSerializationMode.IncludeSchema;
            // 
            // movieBindingSource
            // 
            this.movieBindingSource.DataMember = "movie";
            this.movieBindingSource.DataSource = this.cineplex_ManagementDataSet2;
            // 
            // movieTableAdapter
            // 
            this.movieTableAdapter.ClearBeforeFill = true;
            // 
            // movieNameDataGridViewTextBoxColumn
            // 
            this.movieNameDataGridViewTextBoxColumn.DataPropertyName = "Movie_Name";
            this.movieNameDataGridViewTextBoxColumn.HeaderText = "Movie_Name";
            this.movieNameDataGridViewTextBoxColumn.Name = "movieNameDataGridViewTextBoxColumn";
            // 
            // showtimeDataGridViewTextBoxColumn
            // 
            this.showtimeDataGridViewTextBoxColumn.DataPropertyName = "Showtime";
            this.showtimeDataGridViewTextBoxColumn.HeaderText = "Showtime";
            this.showtimeDataGridViewTextBoxColumn.Name = "showtimeDataGridViewTextBoxColumn";
            // 
            // hallNoDataGridViewTextBoxColumn
            // 
            this.hallNoDataGridViewTextBoxColumn.DataPropertyName = "Hall_No";
            this.hallNoDataGridViewTextBoxColumn.HeaderText = "Hall_No";
            this.hallNoDataGridViewTextBoxColumn.Name = "hallNoDataGridViewTextBoxColumn";
            // 
            // releaseDateDataGridViewTextBoxColumn
            // 
            this.releaseDateDataGridViewTextBoxColumn.DataPropertyName = "Release_Date";
            this.releaseDateDataGridViewTextBoxColumn.HeaderText = "Release_Date";
            this.releaseDateDataGridViewTextBoxColumn.Name = "releaseDateDataGridViewTextBoxColumn";
            // 
            // UserMoviePanel
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(630, 383);
            this.Controls.Add(this.dataGridView1);
            this.Name = "UserMoviePanel";
            this.Text = "Form1";
            this.Load += new System.EventHandler(this.Form1_Load);
            ((System.ComponentModel.ISupportInitialize)(this.dataGridView1)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.cineplex_ManagementDataSet2)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.movieBindingSource)).EndInit();
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.DataGridView dataGridView1;
        private Cineplex_ManagementDataSet2 cineplex_ManagementDataSet2;
        private System.Windows.Forms.BindingSource movieBindingSource;
        private Cineplex_ManagementDataSet2TableAdapters.movieTableAdapter movieTableAdapter;
        private System.Windows.Forms.DataGridViewTextBoxColumn movieNameDataGridViewTextBoxColumn;
        private System.Windows.Forms.DataGridViewTextBoxColumn showtimeDataGridViewTextBoxColumn;
        private System.Windows.Forms.DataGridViewTextBoxColumn hallNoDataGridViewTextBoxColumn;
        private System.Windows.Forms.DataGridViewTextBoxColumn releaseDateDataGridViewTextBoxColumn;
    }
}