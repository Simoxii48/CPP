
//ProgrammingAdvices.com
//Mohammed Abu-Hadhoud

using System;

namespace Main
{
    internal class Program
    {

        static void Main(string[] args)
        {

            int number = 12;
            string result;

            result = (number % 2 == 0) ? "Even Number" : "Odd Number";
            Console.WriteLine("{0} is {1}", number, result);

            Console.ReadKey();

        }
    }
}

