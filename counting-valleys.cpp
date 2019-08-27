//https://www.hackerrank.com/challenges/counting-valleys/problem

// Complete the countingValleys function below.
int countingValleys(int n, string s) {
    int v = 0;
    int lvl = 0;

    for(int i = 0; i < n; i++)
    {
        if(s[i] == 'U')
            lvl++;
        if(s[i] == 'D')    
            lvl--;
        if (lvl == 0 && s[i] == 'U')
            v++;
    }
    return v;
}

