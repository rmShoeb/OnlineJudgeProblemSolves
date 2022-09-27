using System;

public class Test
{
	public static void Main()
	{
		string[] tokens = Console.ReadLine().Split();
		int t = int.Parse(tokens[0]);
		int highest, idx;
		while(t>0){
		    tokens = Console.ReadLine().Split();
		    highest = 0;
		    idx = -1;
		    for(int i=0; i<3; i++){
		        if(highest<int.Parse(tokens[i])){
		            highest = int.Parse(tokens[i]);
		            idx = i;
		        }
		    }
		    switch(idx){
		        case 0:
		            Console.WriteLine("Alice");
		            break;
		        case 1:
		            Console.WriteLine("Bob");
		            break;
		        default:
		            Console.WriteLine("Charlie");
		            break;
		    }
		    t--;
		}
	}
}
