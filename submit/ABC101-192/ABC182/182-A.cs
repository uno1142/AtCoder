using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ABC182A
{
    class Program
    {
        static void Main(string[] args)
        {
            var x = Console.ReadLine().Split(' ');
            int a = int.Parse(x[0]);
            int b = int.Parse(x[1]);
            int c;

            c = 2 * a + 100 - b;
            Console.WriteLine(c);
        }
    }
}