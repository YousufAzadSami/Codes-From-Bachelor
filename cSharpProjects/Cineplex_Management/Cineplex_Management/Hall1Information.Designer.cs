namespace Cineplex_Management
{
    partial class Hall1Information
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
            this.label1 = new System.Windows.Forms.Label();
            this.cineplex_ManagementDataSet5 = new Cineplex_Management.Cineplex_ManagementDataSet5();
            this.hall1InformationBindingSource = new System.Windows.Forms.BindingSource(this.components);
            this.hall1InformationTableAdapter = new Cineplex_Management.Cineplex_ManagementDataSet5TableAdapters.Hall1InformationTableAdapter();
            this.movieNameDataGridViewTextBoxColumn = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.durtionDataGridViewTextBoxColumn = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.releaseDateDataGridViewTextBoxColumn = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.button1 = new System.Windows.Forms.Button();
            this.button2 = new System.Windows.Forms.Button();
            this.button3 = new System.Windows.Forms.Button();
            this.button4 = new System.Windows.Forms.Button();
            ((System.ComponentModel.ISupportInitialize)(this.dataGridView1)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.cineplex_ManagementDataSet5)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.hall1InformationBindingSource)).BeginInit();
            this.SuspendLayout();
            // 
            // dataGridView1
            // 
            this.dataGridView1.AutoGenerateColumns = false;
            this.dataGridView1.ColumnHeadersHeightSizeMode = System.Windows.Forms.DataGridViewColumnHeadersHeightSizeMode.AutoSize;
            this.dataGridView1.Columns.AddRange(new System.Windows.Forms.DataGridViewColumn[] {
            this.movieNameDataGridViewTextBoxColumn,
            this.durtionDataGridViewTextBoxColumn,
            this.releaseDateDataGridViewTextBoxColumn});
            this.dataGridView1.DataSource = this.hall1InformationBindingSource;
            this.dataGridView1.Location = new System.Drawing.Point(30, 87);
            this.dataGridView1.Name = "dataGridView1";
            this.dataGridView1.Size = new System.Drawing.Size(341, 186);
            this.dataGridView1.TabIndex = 0;
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Font = new System.Drawing.Font("Microsoft Sans Serif", 15.75F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label1.Location = new System.Drawing.Point(38, 26);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(247, 25);
            this.label1.TabIndex = 1;
            this.label1.Text = "Now Showing In Hall 1";
            // 
            // cineplex_ManagementDataSet5
            // 
            this.cineplex_ManagementDataSet5.DataSetName = "Cineplex_ManagementDataSet5";
            this.cineplex_ManagementDataSet5.SchemaSerializationMode = System.Data.SchemaSerializationMode.IncludeSchema;
            // 
            // hall1InformationBindingSource
            // 
            this.hall1InformationBindingSource.DataMember = "Hall1Information";
            this.hall1InformationBindingSource.DataSource = this.cineplex_ManagementDataSet5;
            // 
            // hall1InformationTableAdapter
            // 
            this.hall1InformationTableAdapter.ClearBeforeFill = true;
            // 
            // movieNameDataGridViewTextBoxColumn
            // 
            this.movieNameDataGridViewTextBoxColumn.DataPropertyName = "Movie_Name";
            this.movieNameDataGridViewTextBoxColumn.HeaderText = "Movie_Name";
            this.movieNameDataGridViewTextBoxColumn.Name = "movieNameDataGridViewTextBoxColumn";
            // 
            // durtionDataGridViewTextBoxColumn
            // 
            this.durtionDataGridViewTextBoxColumn.DataPropertyName = "Durtion";
            this.durtionDataGridViewTextBoxColumn.HeaderText = "Durtion";
            this.durtionDataGridViewTextBoxColumn.Name = "durtionDataGridViewTextBoxColumn";
            // 
            // releaseDateDataGridViewTextBoxColumn
            // 
            this.releaseDateDataGridViewTextBoxColumn.DataPropertyName = "Release_Date";
            this.releaseDateDataGridViewTextBoxColumn.HeaderText = "Release_Date";
            this.releaseDateDataGridViewTextBoxColumn.Name = "releaseDateDataGridViewTextBoxColumn";
            // 
            // button1
            // 
            this.button1.Location = new System.Drawing.Point(63, 374);
            this.button1.Name = "button1";
            this.button1.Size = new System.Drawing.Size(75, 23);
            this.button1.TabIndex = 2;
            this.button1.Text = "Insert";
            this.button1.UseVisualStyleBackColor = true;
            // 
            // button2
            // 
            this.button2.Location = new System.Drawing.Point(176, 374);
            this.button2.Name = "button2";
            this.button2.Size = new System.Drawing.Size(75, 23);
            this.button2.TabIndex = 2;
            this.button2.Text = "Update";
            this.button2.UseVisualStyleBackColor = true;
            // 
            // button3
            // 
            this.button3.Location = new System.Drawing.Point(296, 374);
            this.button3.Name = "button3";
            this.button3.Size = new System.Drawing.Size(75, 23);
            this.button3.TabIndex = 2;
            this.button3.Text = "Delete";
            this.button3.UseVisualStyleBackColor = true;
            // 
            // button4
            // 
            this.button4.Location = new System.Drawing.Point(653, 26);
            this.button4.Name = "button4";
            this.button4.Size = new System.Drawing.Size(75, 23);
            this.button4.TabIndex = 2;
            this.button4.Text = "Back";
            this.button4.UseVisualStyleBackColor = true;
            this.button4.Click += new System.EventHandler(this.button4_Click);
            // 
            // Hall1Information
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.SystemColors.AppWorkspace;
            this.ClientSize = new System.Drawing.Size(740, 475);
            this.Controls.Add(this.button4);
            this.Controls.Add(this.button3);
            this.Controls.Add(this.button2);
            this.Controls.Add(this.button1);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.dataGridView1);
            this.Name = "Hall1Information";
            this.Text = "Hall1Information";
            this.Load += new System.EventHandler(this.Hall1Information_Load);
            ((System.ComponentModel.ISupportInitialize)(this.dataGridView1)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.cineplex_ManagementDataSet5)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.hall1InformationBindingSource)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.DataGridView dataGridView1;
        private System.Windows.Forms.Label label1;
        private Cineplex_ManagementDataSet5 cineplex_ManagementDataSet5;
        private System.Windows.Forms.BindingSource hall1InformationBindingSource;
        private Cineplex_ManagementDataSet5TableAdapters.Hall1InformationTableAdapter hall1InformationTableAdapter;
        private System.Windows.Forms.DataGridViewTextBoxColumn movieNameDataGridViewTextBoxColumn;
        private System.Windows.Forms.DataGridViewTextBoxColumn durtionDataGridViewTextBoxColumn;
        private System.Windows.Forms.DataGridViewTextBoxColumn releaseDateDataGridViewTextBoxColumn;
        private System.Windows.Forms.Button button1;
        private System.Windows.Forms.Button button2;
        private System.Windows.Forms.Button button3;
        private System.Windows.Forms.Button button4;
    }
}