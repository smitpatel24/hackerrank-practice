// https://www.hackerrank.com/challenges/the-birthday-bar/problem

// Complete the birthday function below.
int birthday(vector<int> s, int d, int m) {
    int n = s.size();
    int count = 0;
    for(int i = 0; i<= n - m; i++)
    {
        int sum = 0;
        for(int j = 0; j < m; j++)
        {
            sum = sum + s[i + j];
        }
        if(sum == d)
            count++;
    }
    return count;
}