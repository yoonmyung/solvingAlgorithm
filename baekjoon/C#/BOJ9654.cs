using System;
using System.Collections.Generic;
using System.Text;

namespace BOJ
{
    class BOJ9654
    {
		public static void Main()
		{
			string fmt = "{0, -15} {1, -15} {2, -11} {3, -10}";

			Console.WriteLine(fmt, "SHIP NAME", "CLASS", "DEPLOYMENT", "IN SERVICE");
			Console.WriteLine(fmt, "N2 Bomber", "Heavy Fighter", "Limited", "21");
			Console.WriteLine(fmt, "J - Type 327", "Light Combat", "Unlimited", "1");
			Console.WriteLine(fmt, "NX Cruiser", "Medium Fighter", "Limited", "18");
			Console.WriteLine(fmt, "N1 Starfighter", "Medium Fighter", "Unlimited", "25");
			Console.WriteLine(fmt, "Royal Cruiser", "Light Combat", "Limited", "4");
		}
	}
}
