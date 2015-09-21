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
using System.Windows.Threading;

namespace animationsNov10
{
    public partial class MainPage : PhoneApplicationPage
    {
        DispatcherTimer myTimer;
        int _giCurrent; 

        // Constructor
        public MainPage()
        {
            InitializeComponent();
            //find a control by name
            //ContentPanel.FindName("ellipse1");
            //initialise the timer
            myTimer = new DispatcherTimer();
            myTimer.Interval = TimeSpan.FromMilliseconds(1000);
            myTimer.Tick += new EventHandler(myTimer_Tick);
        }

        void myTimer_Tick(object sender, EventArgs e)
        {
            Ellipse currE;
            string eName;
            //all animation locgic goes here
            //read squence and run squence
            //txtSquence.Text[giCurrent];
            pieceAnimation.Stop();
            try
            {
                eName="ellipse" + txtSquence.Text[_giCurrent++];
                pieceAnimation.SetValue(Storyboard.TargetNameProperty, eName);
                //set the textBlock text
                currE=ContentPanel.FindName(eName) as Ellipse;
                tblCurrent.Text = currE.Tag.ToString();
                pieceAnimation.Begin();
            }
            catch
            {
                _giCurrent = 0;
                pieceAnimation.SetValue(Storyboard.TargetNameProperty, "ellipse" + txtSquence.Text[_giCurrent++]);
                tblCurrent.Text = "";
                pieceAnimation.Begin();
            }
         
        }

        private void piece_Tap(object sender, GestureEventArgs e)
        {
            //make this generic for all ellipses
            //dont rename refactor
            
            //try to set the target name property to the current piece
            //use the sender first

            Ellipse tmp = (Ellipse)sender;

            try
            {
                //call set value
                //tmp.Tag = "change theTag";
                //tmp.SetValue(Tag, "change the tag");

                //make sure the animation is stopped before reset
                pieceAnimation.Stop();
                //set the taRGETname property
                pieceAnimation.SetValue(Storyboard.TargetNameProperty, tmp.Name);
                //String curreE = pieceAnimation.GetValue(Storyboard.TargetNameProperty).ToString;
                pieceAnimation.Begin();
            }
            catch (Exception ex)
            {
                MessageBox.Show("Error encountered: " + System.Environment.NewLine + ex.Message);
                throw;
            }
        }

        private void btnSquence_Click(object sender, RoutedEventArgs e)
        {
            //start the timer
            //chaneg the contexnt to stop or go 
            if (btnSquence.Content.ToString() == "Go")
            {
                btnSquence.Content = "Stop";
                _giCurrent = 0;
                myTimer.Start();
            }
            else
            {
                myTimer.Stop();
                pieceAnimation.Stop();
                btnSquence.Content = "Go";
                tblCurrent.Text = "";
            }
            
        }
    }
}