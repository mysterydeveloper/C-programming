using System;
using System.Collections.Generic;
using System.Linq;
using System.Net;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Animation;
using System.Windows.Shapes;
using Microsoft.Phone.Controls;
using Microsoft.Phone.Shell;
using System.IO.IsolatedStorage;
using System.IO;

namespace oct13_storage
{
    public partial class MainPage : PhoneApplicationPage
    {
        // Constructor
        public MainPage()
        {
            InitializeComponent();
        }

        private void btnSave_Click(object sender, RoutedEventArgs e)
        {
            //name/value pairs for setting
            (Application.Current as App).SavedName = textBox1.Text;

            //save a a setting using phoneapplicationservice settings
            //creating the setting pageanem  - persistant
            PhoneApplicationService.Current.State["PageName"] = textBox1.Text;

            //save the texty from textbox2 to a file 
            IsolatedStorageFile myStorArea = IsolatedStorageFile.GetUserStoreForApplication();

            //specify the file path and option for the file stream that i read from or wtite to 
            using(var isoFileStream = new IsolatedStorageFileStream("test.text", System.IO.FileMode.OpenOrCreate, myStorArea))
            {
                //finally read or write to the stream
                using (var isoFileWriter= new StreamWriter(isoFileStream))
                {
                    isoFileWriter.Write(textBox2.Text);
                }
            }//end using(var isoFileStream = new IsolatedStorageFileStream("test.text", System.IO.FileMode.OpenOrCreate, myStorArea))
               
        }

        private void btnRestore_Click(object sender, RoutedEventArgs e)
        {

        }

        private void textBox1_GotFocus(object sender, RoutedEventArgs e)
        {
            //make sure all the text is selected    
            textBox1.SelectAll();

        }

        private void button1_Click(object sender, RoutedEventArgs e)
        {
            //WANT TO GO TO PAGE 2 
            NavigationService.Navigate(new Uri("/Page1.xaml", UriKind.RelativeOrAbsolute));
        }
    }
}