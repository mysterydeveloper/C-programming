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
    public partial class Page1 : PhoneApplicationPage
    {
        public Page1()
        {
            InitializeComponent();
            
        }

        protected override void OnNavigatedTo(System.Windows.Navigation.NavigationEventArgs e)
        {
            //PageTitle.Text = (Application.Current as App).SavedName;
            //get the page name from the phoneApplicationService.current etc
            if(PhoneApplicationService.Current.State.ContainsKey("PageName"))
            {
                PageTitle.Text = PhoneApplicationService.Current.State["PageName"].ToString();
            }
            else
            {
                PageTitle.Text=(Application.Current as App).SavedName;
            }
            base.OnNavigatedTo(e);
        }

        private void btnOpenFile_Click(object sender, RoutedEventArgs e)
        {
            //open the file test.text into isolated storage
            // put the contents into the textbox
            //save the texty from textbox2 to a file 
            IsolatedStorageFile myStorArea = IsolatedStorageFile.GetUserStoreForApplication();

            try
            {
                //specify the file path and option for the file stream that i read from or wtite to 
                using (var isoFileStream = new IsolatedStorageFileStream("test.text", System.IO.FileMode.Open, myStorArea))
                {
                    //finally read or write to the stream
                    using (var isoFileReader = new StreamReader(isoFileStream))
                    {
                        textBlock2.Text = isoFileReader.ReadToEnd();

                    }
                }//end using(var isoFileStream = new IsolatedStorageFileStream("test.text", System.IO.FileMode.OpenOrCreate, myStorArea))
            }//end of try 
            catch
            {
                textBlock2.Text = "failed to read file";

            }
             
        }
    }

}