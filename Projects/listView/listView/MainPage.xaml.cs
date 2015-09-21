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

namespace listView
{
    public partial class MainPage : PhoneApplicationPage
    {

        public List<dogs> myListOfDogs;
        // Constructor
        public MainPage()
        {
            InitializeComponent();
        }

        protected override void OnNavigatedTo(System.Windows.Navigation.NavigationEventArgs e)
        {
            //check if the dogs list exist

            //if not fill it 
            if (myListOfDogs == null)
            {
                myListOfDogs = new List<dogs>();
                FillInValues();
                FillInValues();
                FillInValues();
            }
            lbDogsBreeds.ItemsSource = myListOfDogs;
            base.OnNavigatedTo(e);
        }
        private void FillInValues()
        {
            dogs tmpDog;
            tmpDog = new dogs();
            tmpDog.breedName = "small dog";
            tmpDog.breedSize = "small";
            tmpDog.breedExercise = "not demanding";
            tmpDog.breedImage = "Images/dog1.jpg";
            myListOfDogs.Add(tmpDog);

            //wash rinse repeat
            tmpDog = new dogs();
            tmpDog.breedName = "medium dog";
            tmpDog.breedSize = "medium ";
            tmpDog.breedExercise = "somewhat demanding";
            tmpDog.breedImage = "Images/dog2.jpg";
            myListOfDogs.Add(tmpDog);

            tmpDog = new dogs();
            tmpDog.breedName = "big dog";
            tmpDog.breedSize = "big";
            tmpDog.breedExercise = "demanding";
            tmpDog.breedImage = "Images/dog3.jpg";
            myListOfDogs.Add(tmpDog);

        }
    }
}