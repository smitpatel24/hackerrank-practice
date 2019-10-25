//https://www.hackerrank.com/challenges/sock-merchant/problem

// Complete the sockMerchant function below.
int sockMerchant(int n, vector<int> ar) 
{
vector<int> vect(101, 0);
int answer = 0;
for(int i = 0; i < n; i++)
{
    vect[ar[i]]++;
}
for(int j = 0; j < 101; j++)
{
    answer += vect[j] / 2;
}
return answer;
}