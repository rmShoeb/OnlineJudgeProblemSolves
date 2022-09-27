using System;

public class Test
{
	public static void Main()
	{
		string[] tokens = Console.ReadLine().Split();
		int n = int.Parse(tokens[0]);
		int best, second_best;
		int[] number = new int[3];

		while(n>0){
		    tokens = Console.ReadLine().Split();
		    best = 0;
		    second_best = 0;
		    for(int i=0; i<3; i++){
		        number[i] = int.Parse(tokens[i]);
		        if(best<number[i])
		            best = number[i];
		    }
		    for(int i=0; i<3; i++){
		        if(second_best<number[i] && best!=number[i])
		            second_best = number[i];
		    }
		    
		    Console.WriteLine(second_best);
		    n--;
		}
	}
}
