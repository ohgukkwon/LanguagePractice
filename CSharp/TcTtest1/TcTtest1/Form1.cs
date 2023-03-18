using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Drawing.Text;
using System.Linq;
using System.Net.NetworkInformation;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using TwinCAT.Ads;

namespace TcTtest1
{
    public partial class Form1 : Form
    {
        AdsClient tcAds = new AdsClient();
        //TcAdsClient tcAds = new TcAdsClient();    ---it is not working 
        bool diData01;

        public Form1()
        {
            InitializeComponent();
            //tcAds.Connect(textBox1.Text, 851);
        }       
        private void button1_Click(object sender, EventArgs e)
        {
            //tcAds.Connect(textBox1.Text, 851);
            //label2.Text = "Hello 33";
            /*string netId = "5.82.200.98.1.1";
            tcAds.Connect(netId, 851);   */
            if (tcAds.IsConnected)
            {
                MessageBox.Show("Connected", "Connection State");
            }
            else
            {
                MessageBox.Show("Connection Error", "Connection State");
            }
            //diData01 = tcAds.CreateVariableHandle("GVL.iData1");

        }

        private void listBox1_SelectedIndexChanged(object sender, EventArgs e)
        {

        }

        private void label1_Click(object sender, EventArgs e)
        {

        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {

        }
    }
}
