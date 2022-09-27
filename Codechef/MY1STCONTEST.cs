using System;

public class Test
{
	public static void Main()
	{
		string[] tokens = Console.ReadLine().Split();
		int n = int.Parse(tokens[0]);
		int a = int.Parse(tokens[1]);
		int b = int.Parse(tokens[2]);
		
		Console.WriteLine($"{n-a} {n-a-b}");
	}
}
