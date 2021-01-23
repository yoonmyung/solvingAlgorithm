using System;
using System.Collections;
using System.Linq;

namespace ch15_16
{
    class ch15_1
    {
        class Car
        {
            public int Cost { get; set; }
            public int MaxSpeed { get; set; }
        }
        public static void Main()
        {
            Car[] cars =
            {
                new Car() {Cost = 56, MaxSpeed = 120 },
                new Car() {Cost = 70, MaxSpeed = 150 },
                new Car() {Cost = 45, MaxSpeed = 180 },
                new Car() {Cost = 32, MaxSpeed = 200 },
                new Car() {Cost = 82, MaxSpeed = 280 }
            };

            var selected = from car in cars
                           where car.Cost >= 50
                           select car;
            var selected2 = from car in selected
                            where car.MaxSpeed >= 150
                            select car;
            foreach (Car car in selected2)
            {
                Console.WriteLine($"cost: {car.Cost}, max speed: {car.MaxSpeed}");
            }
        }
    }
}