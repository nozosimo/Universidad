﻿namespace Paintsango
{
    partial class VentanaPrincipal
    {
        /// <summary>
        /// Variable del diseñador necesaria.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Limpiar los recursos que se estén usando.
        /// </summary>
        /// <param name="disposing">true si los recursos administrados se deben desechar; false en caso contrario.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Código generado por el Diseñador de Windows Forms

        /// <summary>
        /// Método necesario para admitir el Diseñador. No se puede modificar
        /// el contenido de este método con el editor de código.
        /// </summary>
        private void InitializeComponent()
        {
            this.components = new System.ComponentModel.Container();
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(VentanaPrincipal));
            this.AreaTrabajo = new System.Windows.Forms.PictureBox();
            this.CajaTexto = new System.Windows.Forms.Label();
            this.PosicionX = new System.Windows.Forms.Label();
            this.PosicionY = new System.Windows.Forms.Label();
            this.contextMenuStrip1 = new System.Windows.Forms.ContextMenuStrip(this.components);
            this.inicioToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.menuStrip1 = new System.Windows.Forms.MenuStrip();
            this.inicioToolStripMenuItem1 = new System.Windows.Forms.ToolStripMenuItem();
            this.crearObjetoToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.guardarObjetoToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.cargarObjetoToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.CerrarPoligono = new System.Windows.Forms.CheckBox();
            this.PosicionY2 = new System.Windows.Forms.Label();
            this.PosicionX2 = new System.Windows.Forms.Label();
            this.label1 = new System.Windows.Forms.Label();
            this.label2 = new System.Windows.Forms.Label();
            ((System.ComponentModel.ISupportInitialize)(this.AreaTrabajo)).BeginInit();
            this.contextMenuStrip1.SuspendLayout();
            this.menuStrip1.SuspendLayout();
            this.SuspendLayout();
            // 
            // AreaTrabajo
            // 
            this.AreaTrabajo.BackColor = System.Drawing.Color.Linen;
            this.AreaTrabajo.Cursor = System.Windows.Forms.Cursors.Cross;
            this.AreaTrabajo.Enabled = false;
            this.AreaTrabajo.Location = new System.Drawing.Point(12, 63);
            this.AreaTrabajo.Name = "AreaTrabajo";
            this.AreaTrabajo.Size = new System.Drawing.Size(968, 656);
            this.AreaTrabajo.TabIndex = 0;
            this.AreaTrabajo.TabStop = false;
            this.AreaTrabajo.MouseClick += new System.Windows.Forms.MouseEventHandler(this.pictureBox1_MouseClick);
            this.AreaTrabajo.MouseDoubleClick += new System.Windows.Forms.MouseEventHandler(this.pictureBox1_MouseDoubleClick);
            this.AreaTrabajo.MouseMove += new System.Windows.Forms.MouseEventHandler(this.AreaTrabajo_MouseMove);
            // 
            // CajaTexto
            // 
            this.CajaTexto.AutoSize = true;
            this.CajaTexto.Location = new System.Drawing.Point(12, 595);
            this.CajaTexto.Name = "CajaTexto";
            this.CajaTexto.Size = new System.Drawing.Size(0, 32);
            this.CajaTexto.TabIndex = 1;
            // 
            // PosicionX
            // 
            this.PosicionX.AutoSize = true;
            this.PosicionX.Font = new System.Drawing.Font("Microsoft Sans Serif", 8F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.PosicionX.Location = new System.Drawing.Point(276, 739);
            this.PosicionX.Name = "PosicionX";
            this.PosicionX.Size = new System.Drawing.Size(57, 31);
            this.PosicionX.TabIndex = 3;
            this.PosicionX.Text = "x: 0";
            // 
            // PosicionY
            // 
            this.PosicionY.AutoSize = true;
            this.PosicionY.Font = new System.Drawing.Font("Microsoft Sans Serif", 8F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.PosicionY.Location = new System.Drawing.Point(377, 739);
            this.PosicionY.Name = "PosicionY";
            this.PosicionY.Size = new System.Drawing.Size(58, 31);
            this.PosicionY.TabIndex = 4;
            this.PosicionY.Text = "y: 0";
            // 
            // contextMenuStrip1
            // 
            this.contextMenuStrip1.ImageScalingSize = new System.Drawing.Size(40, 40);
            this.contextMenuStrip1.Items.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.inicioToolStripMenuItem});
            this.contextMenuStrip1.Name = "contextMenuStrip1";
            this.contextMenuStrip1.Size = new System.Drawing.Size(168, 50);
            // 
            // inicioToolStripMenuItem
            // 
            this.inicioToolStripMenuItem.Name = "inicioToolStripMenuItem";
            this.inicioToolStripMenuItem.Size = new System.Drawing.Size(167, 46);
            this.inicioToolStripMenuItem.Text = "Inicio";
            // 
            // menuStrip1
            // 
            this.menuStrip1.ImageScalingSize = new System.Drawing.Size(40, 40);
            this.menuStrip1.Items.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.inicioToolStripMenuItem1});
            this.menuStrip1.Location = new System.Drawing.Point(0, 0);
            this.menuStrip1.Name = "menuStrip1";
            this.menuStrip1.Size = new System.Drawing.Size(992, 49);
            this.menuStrip1.TabIndex = 6;
            this.menuStrip1.Text = "menuStrip1";
            // 
            // inicioToolStripMenuItem1
            // 
            this.inicioToolStripMenuItem1.DropDownItems.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.crearObjetoToolStripMenuItem,
            this.guardarObjetoToolStripMenuItem,
            this.cargarObjetoToolStripMenuItem});
            this.inicioToolStripMenuItem1.Name = "inicioToolStripMenuItem1";
            this.inicioToolStripMenuItem1.Size = new System.Drawing.Size(101, 45);
            this.inicioToolStripMenuItem1.Text = "Inicio";
            // 
            // crearObjetoToolStripMenuItem
            // 
            this.crearObjetoToolStripMenuItem.Name = "crearObjetoToolStripMenuItem";
            this.crearObjetoToolStripMenuItem.Size = new System.Drawing.Size(338, 46);
            this.crearObjetoToolStripMenuItem.Text = "Crear Objeto";
            this.crearObjetoToolStripMenuItem.Click += new System.EventHandler(this.crearObjetoToolStripMenuItem_Click);
            // 
            // guardarObjetoToolStripMenuItem
            // 
            this.guardarObjetoToolStripMenuItem.Name = "guardarObjetoToolStripMenuItem";
            this.guardarObjetoToolStripMenuItem.Size = new System.Drawing.Size(338, 46);
            this.guardarObjetoToolStripMenuItem.Text = "Guardar Objeto";
            this.guardarObjetoToolStripMenuItem.Click += new System.EventHandler(this.guardarObjetoToolStripMenuItem_Click);
            // 
            // cargarObjetoToolStripMenuItem
            // 
            this.cargarObjetoToolStripMenuItem.Name = "cargarObjetoToolStripMenuItem";
            this.cargarObjetoToolStripMenuItem.Size = new System.Drawing.Size(338, 46);
            this.cargarObjetoToolStripMenuItem.Text = "Cargar Objeto";
            this.cargarObjetoToolStripMenuItem.Click += new System.EventHandler(this.cargarObjetoToolStripMenuItem_Click);
            // 
            // CerrarPoligono
            // 
            this.CerrarPoligono.AutoSize = true;
            this.CerrarPoligono.Location = new System.Drawing.Point(737, 13);
            this.CerrarPoligono.Name = "CerrarPoligono";
            this.CerrarPoligono.Size = new System.Drawing.Size(243, 36);
            this.CerrarPoligono.TabIndex = 7;
            this.CerrarPoligono.Text = "Cerra Poligono";
            this.CerrarPoligono.UseVisualStyleBackColor = true;
            // 
            // PosicionY2
            // 
            this.PosicionY2.AutoSize = true;
            this.PosicionY2.Font = new System.Drawing.Font("Microsoft Sans Serif", 8F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.PosicionY2.Location = new System.Drawing.Point(833, 738);
            this.PosicionY2.Name = "PosicionY2";
            this.PosicionY2.Size = new System.Drawing.Size(58, 31);
            this.PosicionY2.TabIndex = 9;
            this.PosicionY2.Text = "y: 0";
            // 
            // PosicionX2
            // 
            this.PosicionX2.AutoSize = true;
            this.PosicionX2.Font = new System.Drawing.Font("Microsoft Sans Serif", 8F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.PosicionX2.Location = new System.Drawing.Point(732, 738);
            this.PosicionX2.Name = "PosicionX2";
            this.PosicionX2.Size = new System.Drawing.Size(57, 31);
            this.PosicionX2.TabIndex = 8;
            this.PosicionX2.Text = "x: 0";
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(59, 738);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(211, 32);
            this.label1.TabIndex = 10;
            this.label1.Text = "Coord. Relativa";
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(515, 738);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(212, 32);
            this.label2.TabIndex = 11;
            this.label2.Text = "Coord. Pantalla";
            // 
            // VentanaPrincipal
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(16F, 31F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(992, 788);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.PosicionY2);
            this.Controls.Add(this.PosicionX2);
            this.Controls.Add(this.CerrarPoligono);
            this.Controls.Add(this.menuStrip1);
            this.Controls.Add(this.PosicionY);
            this.Controls.Add(this.PosicionX);
            this.Controls.Add(this.CajaTexto);
            this.Controls.Add(this.AreaTrabajo);
            this.Icon = ((System.Drawing.Icon)(resources.GetObject("$this.Icon")));
            this.MainMenuStrip = this.menuStrip1;
            this.Name = "VentanaPrincipal";
            this.Text = "Paintsango";
            this.Load += new System.EventHandler(this.VentanaPrincipal_Load);
            ((System.ComponentModel.ISupportInitialize)(this.AreaTrabajo)).EndInit();
            this.contextMenuStrip1.ResumeLayout(false);
            this.menuStrip1.ResumeLayout(false);
            this.menuStrip1.PerformLayout();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.PictureBox AreaTrabajo;
        private System.Windows.Forms.Label CajaTexto;
        private System.Windows.Forms.Label PosicionX;
        private System.Windows.Forms.Label PosicionY;
        private System.Windows.Forms.ContextMenuStrip contextMenuStrip1;
        private System.Windows.Forms.ToolStripMenuItem inicioToolStripMenuItem;
        private System.Windows.Forms.MenuStrip menuStrip1;
        private System.Windows.Forms.ToolStripMenuItem inicioToolStripMenuItem1;
        private System.Windows.Forms.ToolStripMenuItem crearObjetoToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem guardarObjetoToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem cargarObjetoToolStripMenuItem;
        private System.Windows.Forms.CheckBox CerrarPoligono;
        private System.Windows.Forms.Label PosicionY2;
        private System.Windows.Forms.Label PosicionX2;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Label label2;
    }
}

