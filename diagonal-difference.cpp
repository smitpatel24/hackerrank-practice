//https://www.hackerrank.com/challenges/diagonal-difference/problem

/*
 * Complete the 'diagonalDifference' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts 2D_INTEGER_ARRAY arr as parameter.
 */

int diagonalDifference(vector<vector<int>> arr) {
int pd = 0;
int sd = 0;
int diff = 0;
int n = arr.size();
for(int i = 0; i < n; i++)
{
    pd = pd + arr[i][i];
}
for(int j = 0; j < n; j++)
{
    sd = sd + arr[j][(n-1)-j];
}
diff = abs(pd - sd);
return diff;
}
