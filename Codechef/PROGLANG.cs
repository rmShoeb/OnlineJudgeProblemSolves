using System;

public class Test
{
	public static void Main()
	{
		string[] tokens = Console.ReadLine().Split();
		int t = int.Parse(tokens[0]);
		int a, b, a1, b1, a2, b2;
		while(t>0){
		    tokens = Console.ReadLine().Split();
		    a = int.Parse(tokens[0]);
		    b = int.Parse(tokens[1]);
		    a1 = int.Parse(tokens[2]);
		    b1 = int.Parse(tokens[3]);
		    a2 = int.Parse(tokens[4]);
		    b2 = int.Parse(tokens[5]);
		    
		    if((a==a1 || a==b1) && (b==a1 || b==b1)){
		        Console.WriteLine(1);
		    }
		    else if((a==a2 || a==b2) && (b==a2 || b==b2)){
		        Console.WriteLine(2);
		    }
		    else{
		        Console.WriteLine(0);
		    }
		    t--;
		}
	}
}
