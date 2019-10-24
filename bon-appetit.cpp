//https://www.hackerrank.com/challenges/bon-appetit/problem

// Complete the bonAppetit function below.
void bonAppetit(vector<int> bill, int k, int b) {
    int anna_total = 0;
    int refund = 0;
    for(int i = 0; i < bill.size(); i++)
    {
        if(i != k)
        {
            anna_total += bill[i];
        }
    }
    anna_total = anna_total/2;
    if(anna_total == b)
    {
        cout << "Bon Appetit";
    }
    else
    {
        refund = b - anna_total;
        cout << refund;
    }

}