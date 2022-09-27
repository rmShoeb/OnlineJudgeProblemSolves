using System;

public class Test
{
	public static void Main()
	{
		string[] tokens = Console.ReadLine().Split();
		int x, y;
		x = int.Parse(tokens[0]);
		y = int.Parse(tokens[1]);
		
		if(y>x) Console.WriteLine("YES");
		else Console.WriteLine("NO");
	}
}
