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

namespace pivotPan
{
    public partial class PivotPage1 : PhoneApplicationPage
    {
        public PivotPage1()
        {
            InitializeComponent();
        }
        protected override void OnNavigatedTo(System.Windows.Navigation.NavigationEventArgs e)
        {
            loadMyData();
            base.OnNavigatedTo(e);
        }

        private void loadMyData()
        {
            //add data to the pivot page 
            tblEnglish.Text = "one " + System.Environment.NewLine + "two " + System.Environment.NewLine + "three " + System.Environment.NewLine + "four " + System.Environment.NewLine + "five ";
            tblJapanese.Text = "ichi " + System.Environment.NewLine + "ni " + System.Environment.NewLine + "san " + System.Environment.NewLine + "yon " + System.Environment.NewLine + "go ";
            tblSpanish.Text = "uno " + System.Environment.NewLine + "dos " + System.Environment.NewLine + "tres " + System.Environment.NewLine + "quattro " + System.Environment.NewLine + "cinqo ";
        }
    }
}