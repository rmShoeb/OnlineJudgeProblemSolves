using System;

public class Test
{
	public static void Main()
	{
	    string[] tokens = Console.ReadLine().Split();
		int x = int.Parse(tokens[0]);
		int y = int.Parse(tokens[1]);
		
		Console.WriteLine(x-y);
	}
}
