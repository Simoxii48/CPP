using System;

namespace Write
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Hello World !"); // Similar to cout << text << endl;
            Console.WriteLine("My Name is Mohammed Abu-Hadhoud");

            // All the lines will be at the same line
            Console.Write("I'm Learning C#"); // Similar to cout << text;
            Console.Write("It's an easy language to learn :)");
            Console.Write("Sum of 10 + 20 = " + (10 + 20));

            Console.ReadKey();
        }
    }
}
