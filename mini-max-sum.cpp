// https://www.hackerrank.com/challenges/mini-max-sum/problem

// Complete the miniMaxSum function below.
void miniMaxSum(vector<int> arr) {
	int n = 5;   
    long max = 0;
    long min = 0;
    sort(arr.begin(), arr.end()); 
    for(int i = 1; i < n; i++)
    {
        max = max + arr[i];
    }
    for (int j = 0; j < n-1; j++)
    {
        min = min + arr[j];
    }
    printf("%ld %ld", min, max);
}