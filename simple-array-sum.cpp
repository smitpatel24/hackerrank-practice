// https://www.hackerrank.com/challenges/simple-array-sum/problem

/*
 * Complete the simpleArraySum function below.
 */
int simpleArraySum(vector<int> ar) {
    long sum = 0;
    for(int i = 0; i < ar.size(); i++)
    {
        sum = sum + ar[i];
    }
    return sum;
}
