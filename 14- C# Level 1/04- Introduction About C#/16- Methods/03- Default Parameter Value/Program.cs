﻿
//ProgrammingAdvices.com
//Mohammed Abu-Hadhoud

using System;


namespace Main
{
    internal class Program
    {

        static void PrintMyInfo(string Name, byte Age, string Address = "No Address")
        {
            Console.WriteLine("Name= {0} , Age= {1}, Address= {2}", Name, Age, Address);
        }
        static void Main(string[] args)
        {

            //First we did not provide the address it's optional
            PrintMyInfo("Mohammed-AbuHadhoud", 45);

            //second we provided the address
            PrintMyInfo("Mohammed-AbuHadhoud", 45, "Amman-Jordan");

            Console.ReadKey();

        }
    }
}
