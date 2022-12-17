/*
 * Complete the 'countApplesAndOranges' function below.
 *
 * The function accepts following parameters:
 *  1. INTEGER s
 *  2. INTEGER t
 *  3. INTEGER a
 *  4. INTEGER b
 *  5. INTEGER_ARRAY apples
 *  6. INTEGER_ARRAY oranges
 */

void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges) {
    int apple_count{0};
    int orange_count{0};
    int point;
    
    for(auto apple: apples){
        point = a+apple;
        if(point>=s && point<=t) apple_count++;
    }
    for(auto orange: oranges){
        point = b+orange;
        if(point>=s && point<=t) orange_count++;
    }
    
    printf("%d\n%d\n", apple_count, orange_count);
}