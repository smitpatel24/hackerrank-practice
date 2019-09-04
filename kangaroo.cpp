// https://www.hackerrank.com/challenges/kangaroo/problem

// Complete the kangaroo function below.
string kangaroo(int x1, int v1, int x2, int v2) {
     string s2 = "NO";   
    if(v1 < v2 || v2 == v1){
         return s2;
    }
    if((x1 - x2) % (v2 - v1) == 0) {
        string s1 = "YES";
        return s1;
    }
    else{
        return s2;
    }

}