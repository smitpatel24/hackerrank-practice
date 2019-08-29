//https://www.hackerrank.com/challenges/plus-minus/problem

// Complete the plusMinus function below.
void plusMinus(vector<int> arr) {
    float arr_size = arr.size();
    float positive = 0;
    float negative = 0;
    float zero = 0; 
    float p = 0;
    float n = 0;
    float z = 0;
    for(int i = 0; i < arr_size; i++)
    {
        if(arr[i] > 0)
            positive++;
        if(arr[i] < 0)
            negative++;
        if(arr[i] == 0)
            zero++;
    }
    p = positive / arr_size;
    n = negative / arr_size;
    z = zero / arr_size;
    printf("%f\n",p);
    printf("%f\n",n);
    printf("%f",z);
}