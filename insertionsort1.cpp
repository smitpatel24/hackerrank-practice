//https://www.hackerrank.com/challenges/insertionsort1/problem

void insertionSort1(int n, vector<int> arr) {
    int temp = arr[n - 1];
    int k = 0;
    int i = 0;
    for(i = n - 2; i >= 0; i--)
    {
        if(arr[i] >= temp)
        {
            arr[i + 1] = arr[i];
        }
        else
        {
            arr[i + 1] = temp;
            k = 1;
            break;
        }
        for(int j = 0; j < n; j++)
        {
            cout << arr[j] << " ";
        }
        cout << endl;
        
    }
    if(i == -1)
        {
            arr[0] = temp;
            k = 1;
        }
    
    if( k == 1)
    {
        for(int j = 0; j < n; j++)
        {
            cout << arr[j] << " ";
        }
    }

}