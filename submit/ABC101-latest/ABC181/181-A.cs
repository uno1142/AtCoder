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
            int N = int.Parse(Console.ReadLine());
            if( N % 2 == 0){
                Console.WriteLine("White");
            }
            else Console.WriteLine("Black");
        }
    }
}