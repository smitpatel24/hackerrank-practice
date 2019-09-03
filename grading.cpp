// https://www.hackerrank.com/challenges/grading/problem

/*
 * Complete the 'gradingStudents' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts INTEGER_ARRAY grades as parameter.
 */

vector<int> gradingStudents(vector<int> grades) {
    int n = grades.size();
    vector<int> temp = grades;
    int find = 0;
    for(int i = 0; i < n; i++)
    {
        if(temp[i] > 37 && temp[i] < 100)
        {
            find = temp[i] % 5;
            find = 5 - find;
            if(find < 3)
                temp[i] = temp[i] + find;
        }
    }
    return temp;
}