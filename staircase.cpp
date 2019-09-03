// https://www.hackerrank.com/challenges/staircase/problem

// Complete the staircase function below.
void staircase(int n) {
   for(int i = 1; i <= n; i++)
   {
       for(int j = 1; j <= n - i ; j++)
       {
           printf(" ");
       }
       for(int k = 1; k <= i; k++)
       {
           printf("#");
       }
       if( i != n)
        printf("\n");
   }
}
