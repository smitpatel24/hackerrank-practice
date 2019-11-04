//https://www.hackerrank.com/challenges/electronics-shop/problem

int getMoneySpent(vector<int> keyboards, vector<int> drives, int b) {
 int n = keyboards.size();
 int m = drives.size();
 vector<int> vect;
 int temp = 0;
 int k_min = *min_element(keyboards.begin(), keyboards.end());
 int d_min = *min_element(drives.begin(), drives.end());
 int answer = 0;   
 if((k_min + d_min) > b)
 {
     return -1;
 }
 else
 {
     for(int i = 0; i < n; i ++)
     {
         for(int j = 0; j < m; j++)
         {
             temp = (keyboards[i] + drives[j]);
             if(temp <= b)
             {
                 vect.push_back(temp);
             }
         }
     }
     answer = *max_element(vect.begin(), vect.end());
     return answer;
  }
}