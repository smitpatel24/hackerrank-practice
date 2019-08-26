/*
https://www.hackerrank.com/challenges/birthday-cake-candles/problem
*/

// Complete the birthdayCakeCandles function below.
int birthdayCakeCandles(vector<int> ar) {
    int max = *max_element(ar.begin(), ar.end());
    int size = ar.size();
    int count = 0;
    for(int i = 0; i < size; i++)
    {
        if(ar[i] == max)
        {
            count++;
        }
    }
    return count;
}