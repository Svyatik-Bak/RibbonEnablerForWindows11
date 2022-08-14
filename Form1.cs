using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;
using System.Diagnostics;

namespace RibbonEnablerForWindows11
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            Process.Start("cmd.exe", "/c taskkill /f /im explorer.exe & start explorer.exe");
        }

        private void radioButton1_CheckedChanged(object sender, EventArgs e)
        {
            Process.Start("reg.exe", @"add ""HKLM\SOFTWARE\Microsoft\Windows\CurrentVersion\Shell Extensions\Blocked"" /f");
            Process.Start("reg.exe", @"add ""HKLM\SOFTWARE\Microsoft\Windows\CurrentVersion\Shell Extensions\Blocked"" /v {e2bf9676-5f8f-435c-97eb-11607a5bedf7} /t REG_SZ /f");
        }

        private void radioButton2_CheckedChanged(object sender, EventArgs e)
        {
            Process.Start("reg.exe", @"delete ""HKLM\SOFTWARE\Microsoft\Windows\CurrentVersion\Shell Extensions\Blocked"" /v {e2bf9676-5f8f-435c-97eb-11607a5bedf7} /f");
        }
    }
}