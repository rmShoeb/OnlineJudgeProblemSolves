using System;

public class Test
{
	public static void Main()
	{
		string[] tokens = Console.ReadLine().Split();
		int t = int.Parse(tokens[0]);
		int x, n;
		while(t>0){
		    tokens = Console.ReadLine().Split();
		    x = int.Parse(tokens[0]);
		    n = int.Parse(tokens[1]);
		    
		    Console.WriteLine((x/10)*n);
		    t--;
		}
	}
}
