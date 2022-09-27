using System;

public class Test
{
	public static void Main()
	{
		string[] tokens = Console.ReadLine().Split();
		int t = int.Parse(tokens[0]);
		int x, y;
		while(t>0){
		    tokens = Console.ReadLine().Split();
		    x = int.Parse(tokens[0]);
		    y = int.Parse(tokens[1]);
		    
		    Console.WriteLine(Math.Max(x, y));
		    t--;
		}
	}
}
