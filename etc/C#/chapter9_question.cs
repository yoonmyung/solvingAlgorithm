using System;
using System.Collections.Generic;
using System.Text;

namespace Ex9_1
{
    class NameCard
    {
        private int age;
        private string name;

        public int Age
        {
            get; set;
        }

        public string Name
        {
            get; set;
        }
    }
    /*
    class MainApp
    {
        public static void Main()
        {
            NameCard MyCard = new NameCard();

            MyCard.Age = 24;
            MyCard.Name = "상현";

            Console.WriteLine($"나이: {MyCard.Age} \n이름: {MyCard.Name}");
        }
    }
    */
}


namespace Ex9_2
{
    /*
    class MainApp
    {
        static void Main(string[] args)
        {
            var nameCard = new { Name = "박상현", Age = 17};
            Console.WriteLine($"이름: {nameCard.Name}, 나이: {nameCard.Age}");

            var complex = new { Real = 3, Imaginary = -12 };
            Console.WriteLine($"Real: {complex.Real}, Imaginary: {complex.Imaginary}");
        }
    }
    */
}