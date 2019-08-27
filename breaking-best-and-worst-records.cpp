// https://www.hackerrank.com/challenges/breaking-best-and-worst-records/problem


// Complete the breakingRecords function below.
vector<int> breakingRecords(vector<int> scores) {
    int scores_size = scores.size();
    int max = 0;
    int min = 0;
    int max_count = 0;
    int min_count = 0;
    for(int i = 0; i < scores_size; i++)
    {
        if(i == 0)
        {
            max = scores[0];
            min = scores[0];
        }
        if(scores[i] > max)
        {
             max = scores[i];
             max_count++;
        }
        if(scores[i] < min)
        {    
            min = scores[i];
            min_count++;
        }    
    }
    vector<int> answer{max_count, min_count};
    return answer;

}
