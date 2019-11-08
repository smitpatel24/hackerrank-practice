//https://www.hackerrank.com/challenges/insertionsort2/problem

// Complete the insertionSort2 function below.
void insertionSort2(int n, vector<int> arr) {
    for(int i = 1; i < n; i++)
    {
        int num = arr[i];
        for(int j = i - 1; j >= 0; j--)
        {
            if(num < arr[j])
            {
                arr[j + 1] = arr[j];
                arr[j] = num;
            }
        }
        for(int k = 0; k < n; k++)
        {
            cout << arr[k] << " ";
        }
        cout << endl;
    }


}