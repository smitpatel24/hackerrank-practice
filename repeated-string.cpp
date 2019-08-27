//https://www.hackerrank.com/challenges/repeated-string/problem

// Complete the repeatedString function below.
long repeatedString(string s, long n) {
    int s_size = s.size();
    int count = 0;
    for(int i = 0; i < s_size; i++)
    {
        if(s[i] == 'a')
            count++;
    }
    long complete = (n / s_size) * count;
    long extra = n % s_size;
    int add = 0;
    for(int j = 0; j < extra; j++)
    {
        if(s[j] == 'a')
            add++;
    }
    long total = complete + add;
    return total;
}