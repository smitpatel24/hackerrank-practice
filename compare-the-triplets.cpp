// https://www.hackerrank.com/challenges/compare-the-triplets/problem?h_r=next-challenge&h_v=zen

// Complete the compareTriplets function below.
vector<int> compareTriplets(vector<int> a, vector<int> b) {
    int pa = 0;
    int pb = 0;
    for(int i = 0; i < 3; i++)
    {
        if(a[i] > b[i])
            pa++;
        if(a[i] < b[i])
            pb++;
    }
    vector<int> answer{pa, pb};
    return answer;
}