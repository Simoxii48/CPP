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

            for (int i = 1; i <= 5; ++i)
            {

                if (i == 3)
                {
                    continue;
                }

                Console.WriteLine(i);
            }

            Console.ReadKey();

        }
    }
}
