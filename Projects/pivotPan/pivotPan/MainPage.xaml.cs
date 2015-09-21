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
    public partial class MainPage : PhoneApplicationPage
    {
        // Constructor
        public MainPage()
        {
            InitializeComponent();
        }

        protected override void OnNavigatedTo(System.Windows.Navigation.NavigationEventArgs e)
        {
            //make sure th canvas is invisible
            cvsSomething.Visibility = System.Windows.Visibility.Collapsed;

            base.OnNavigatedTo(e);
        }

        private void btnShowHide_Click(object sender, RoutedEventArgs e)
        {
            //show and hide some stuff 
            cvsSomething.Visibility = System.Windows.Visibility.Visible;
        }

        private void pivot_Click(object sender, RoutedEventArgs e)
        {
            //show pivot page
            NavigationService.Navigate(new Uri("/PivotPage1.xaml", UriKind.RelativeOrAbsolute));
        }

        private void pana_Click(object sender, RoutedEventArgs e)
        {
            //show panarama page
            NavigationService.Navigate(new Uri("/PanoramaPage1.xaml", UriKind.RelativeOrAbsolute));
        }

 
    }
}