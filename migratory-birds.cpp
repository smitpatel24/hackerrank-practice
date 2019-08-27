//https://www.hackerrank.com/challenges/migratory-birds/problem?isFullScreen=false

// Complete the migratoryBirds function below.
int migratoryBirds(vector<int> arr) {
    vector<int> vect(5, 0);
    int arr_size = arr.size();
    for(int i = 0; i < arr_size; i++)
    {
        vect[arr[i]-1]++;
    } 
    int index = (std::max_element(vect.begin(),vect.end()) - vect.begin()) + 1;
    return index;
}