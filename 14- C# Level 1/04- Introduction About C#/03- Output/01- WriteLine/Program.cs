using System;

namespace WriteLine
{
    internal class Program
    {
        static void Main(string[] args)
        {
            // Each line is consoled in a line with \n automatically
            Console.WriteLine("Hello World !");
            Console.WriteLine("My Name is Mohammed Abu-Hadhoud");
            Console.WriteLine("I'm Learning C#");
            Console.WriteLine("It's an easy language to learn :)");
            Console.WriteLine("The Sum of 10 + 20 = " + (10 + 20)); // without using () for math will use concatenation
            Console.WriteLine("The Sum of 10 + 20 = " + 10 + 20);

            Console.ReadKey(); // Equivalent to system("pause>0");
        }
    }
}
