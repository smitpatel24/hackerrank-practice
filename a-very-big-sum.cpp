// https://www.hackerrank.com/challenges/a-very-big-sum/problem?h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen

// Complete the aVeryBigSum function below.
long aVeryBigSum(vector<long> ar) {
    long sum = 0;
    for(int i = 0; i < ar.size(); i++)
    {           
         sum = sum + ar[i];
    }
    return sum;
}