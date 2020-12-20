using System;
using System.Collections.Generic;
using System.Text;

namespace chapter8
{
    //8장 비타민 문제 2번 (클래스에서 비허용된 다중상속 기능 구현)
    interface IFlyable
    {
        void Fly();
    }

    interface IRunnable
    {
        void Run();
    }

    public class Plane : IFlyable
    {
        public void Fly()
        {
            Console.WriteLine("Fly! Fly!");
        }
    }

    public class Car : IRunnable
    {
        public void Run()
        {
            Console.WriteLine("Run! Run!");
        }
    }

    public class FlyingCar : IFlyable, IRunnable
    {
        public void Fly()
        {
            Plane plane = new Plane();
            plane.Fly();
        }

        public void Run()
        {
            Car car = new Car();
            car.Run();
        }
    }
}

