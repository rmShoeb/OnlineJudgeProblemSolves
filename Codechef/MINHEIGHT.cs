using System;

public class Test
{
	public static void Main()
	{
		string[] tokens = Console.ReadLine().Split();
		int t = int.Parse(tokens[0]);
		int x, h;
		while(t>0){
		    tokens = Console.ReadLine().Split();
		    x = int.Parse(tokens[0]);
		    h = int.Parse(tokens[1]);
		    
		    if(x<h) Console.WriteLine("NO");
		    else Console.WriteLine("YES");
		    
		    t--;
		}
	}
}
