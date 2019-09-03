// https://www.hackerrank.com/challenges/apple-and-orange/problem

// Complete the countApplesAndOranges function below.
void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges) {
    int spot = 0;
    int a_size = apples.size();
    int o_size = oranges.size();
    int apple_count = 0;
    int orange_count = 0;

    for(int i = 0; i < a_size ; i++)
    {
        spot = a + apples[i];
        if(spot >= s && spot <= t)
            apple_count++;
    }
    spot = 0;
    for(int j = 0; j < o_size ; j++)
    {
        spot = b + oranges[j];
        if(spot >= s && spot <= t)
            orange_count++;
    }
    printf("%d\n", apple_count);
    printf("%d", orange_count);
}