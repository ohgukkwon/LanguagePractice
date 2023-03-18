using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using TwinCAT.Ads;
using System.Windows.Forms;
using Microsoft.VisualStudio.Shell.Interop;
using NDesk.Options;

namespace TcTtest1
{
    internal class Program
    {
        static void Main(string[] args)
        {
            string visualStudioFilePath = "";
            string amsnetid = "";
            bool showhelp = false;


            using (AdsClient client = new AdsClient())
            {
                Console.WriteLine("Hello World"); 
                string netid = "5.82.200.98.1.1";
                               
                int valueToRead = 0;
                //uint valueToWrite = 42;
                
                client.Connect(netid, 851);
                //client.WriteValue("MAIN.nCounter", valueToWrite);
                valueToRead = (int)client.ReadValue("MAIN.mCounter", typeof(int));
                Console.WriteLine("The Value is :  " + valueToRead.ToString());
                Console.ReadLine();
            }
            //myForm = new Form2();
            //Application.Run(new Form1());
            //Application.Run(new TcConnection());

            //Console.ReadLine();
        }
    }
}
