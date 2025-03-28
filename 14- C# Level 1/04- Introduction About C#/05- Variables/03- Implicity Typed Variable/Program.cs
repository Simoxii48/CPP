
//ProgrammingAdvices.com
//Mohammed Abu-Hadhoud

using System;

namespace Main
{
    internal class Program
    {
        static void Main(string[] args)
        {

            /* Implicitly typed variables
             Alternatively in C#, we can declare a variable without knowing 
             its type using var keyword. 
             Such variables are called implicitly typed local variables.

             Variables declared using var keyword must be initialized at the time of declaration.
            */

            var x = 10;
            var y = 10.5;
            var z = "Mohammed";

            Console.WriteLine("x={0}, y={1}, z={2}", x, y, z);

            Console.ReadKey();

        }
    }
}