//https://www.hackerrank.com/challenges/between-two-sets/problem

/*
 * Complete the 'getTotalX' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY a
 *  2. INTEGER_ARRAY b
 */

int getTotalX(vector<int> a, vector<int> b) {
    int a_max = *max_element(a.begin(), a.end());
    int b_min = *min_element(b.begin(), b.end());
    int a_size = a.size();
    int b_size = b.size();
    int found = 0;
    for(int i = a_max; i <= b_min; i++)
    {
        int count_a = 0;
        int count_b = 0;
        for(int j = 0; j < a_size; j++)
        {
            if(i % a[j] == 0)
                count_a++;
        }
        for(int k = 0; k < b_size; k++)
        {
            if(b[k] % i == 0)
                count_b++;
        }
        if ((count_a == a_size) && (count_b == b_size))
            found ++;
    }
    return found;
    }