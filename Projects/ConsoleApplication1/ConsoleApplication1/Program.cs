using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace ConsoleApplication1
{
    class Program
    {
        static void Main(string[] args)
        {
            String firstName, LastName, middleName;

            Console.Write("what is your first name? ");
            firstName = Console.ReadLine();

            Console.Write("what is your middle Name? ");
            middleName = Console.ReadLine();

            Console.Write("what is your last name? ");
            LastName = Console.ReadLine();

            Console.WriteLine("hello {0} {1} {2} ", LastName, firstName,  middleName);
        }
    }
}
