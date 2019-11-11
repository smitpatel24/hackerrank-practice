//https://www.hackerrank.com/challenges/countingsort2/problem

// Complete the countingSort function below.
vector<int> countingSort(vector<int> arr) {
    int index = 0;
    long long n =  arr.size();
    vector<int> answer(100, 0);
    for(int i = 0; i < n; i++)
    {
        index = arr[i];
        answer[index]++;
    }
    vector<int> answer1;
    for(int j = 0; j < answer.size(); j++)
    {
        if(answer[j] > 0)
        {
            for(int k = 0; k < answer[j]; k++)
            {
                answer1.push_back(j);
            }
        }
    }
    return answer1;
}