﻿
//ProgrammingAdvices.com
//Mohammed Abu-Hadhoud

using System;


namespace Main
{
    internal class Program
    {

        static void Main(string[] args)
        {
            // First Exemple

            char[] myArray = { 'H', 'e', 'l', 'l', 'o' };

            foreach (char ch in myArray)
            {
                Console.WriteLine(ch);
            }

            Console.ReadKey();

            // Second Exemple

            char[] gender = { 'm', 'f', 'm', 'm', 'm', 'f', 'f', 'm', 'm', 'f' };
            int male = 0, female = 0;
            foreach (char g in gender)
            {
                if (g == 'm')
                    male++;
                else if (g == 'f')
                    female++;
            }
            Console.WriteLine("Number of male = {0}", male);
            Console.WriteLine("Number of female = {0}", female);

            Console.ReadKey();
        }
    }
}
