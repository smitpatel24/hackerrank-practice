// https://www.hackerrank.com/challenges/countingsort1/problem

// Complete the countingSort function below.
vector<int> countingSort(vector<int> arr) {
    int index = 0;
    long long n =  arr.size();
    cout << n;
    vector<int> answer(100, 0);
    for(int i = 0; i < n; i++)
    {
        index = arr[i];
        answer[index]++;
    }
    return answer;
}