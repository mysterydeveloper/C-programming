using System;
using System.Net;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Documents;
using System.Windows.Ink;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Animation;
using System.Windows.Shapes;
using System.ComponentModel;

namespace oct20DataBinding
{
    public class myCalculator : INotifyPropertyChanged
    {
        
        //property change
        public event PropertyChangedEventHandler PropertyChanged; 


        //set up three properties
        //first value, second value , answer value

        private double firstValue;
        public double FirstValue
        {
            get
            {
                return firstValue;

            }
            set
            {
                firstValue = value;

                if (PropertyChanged != null)
                {
                    PropertyChanged(this, new PropertyChangedEventArgs("AnswerValue"));

                }
            }
        }
        private double secondValue;
        public double SecondValue
        {
            get
            {
                return secondValue;

            }
            set
            {
                secondValue = value;


                if (PropertyChanged != null)
                {
                    PropertyChanged(this, new PropertyChangedEventArgs("AnswerValue"));

                }
            }
        }
        public double AnswerValue
        {
            get
            {
                return firstValue + secondValue;
            }
        }

    }
}
