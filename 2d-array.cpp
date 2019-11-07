//https://www.hackerrank.com/challenges/2d-array/problem

// Complete the hourglassSum function below.
int hourglassSum(vector<vector<int>> arr) {
    int k = 0;
    vector<int> vect;

    for(int i = 0; i <= 3; i++)
    {
        for(int j = 0; j <= 3; j++)
        {
            vect[k] = (arr[i][j] + arr[i][j+1] + arr[i][j+2]);
            k++;
        }
    }
    k = 0;
    for(int i = 2; i <= 5; i++)
    {
        for(int j = 0; j <= 3; j++)
        {
            vect[k] += (arr[i][j] + arr[i][j+1] + arr[i][j+2]);
            k++;
        }
    }
    k = 0;
    for(int i = 1; i <= 4; i++)
    {
        for(int j = 1; j <= 4; j++)
        {
            vect[k] += (arr[i][j]);
            k++;
        }
    }
    int answer = (*max_element(vect.begin(), vect.end()));
    return answer;

}