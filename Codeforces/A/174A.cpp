/*
n merry programmers
same amount of ber-cola
drink's volume in each of the n mug
must be same
the first mug has a1 mililitres
the second one has a2
b milliliters left
condition:
b milliliters to pour
the volumes of the drink should be equal
*/
#include<bits/stdc++.h>
using namespace std;
int a[210];
int main()
{
    int n , b;
    cin>> n >> b;
    int sum = b;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
   double l = (double)sum / (double)n;
   double k = (double) n;
   double s =  (double)sum;
  // cout<<s<<setprecision(6)<<'\n';
  double q = l*k;
   if(q == s)
   {
       for(int i = 0; i < n; i++)
    {
        double p = (double)a[i];
        double r = l - p;
        if(r < 0)
        {
            cout<<-1;
            return 0;
        }

    }
       for(int i = 0; i < n; i++)
    {
        double p = (double)a[i];
        double r = l - p;
        printf("%0.6lf\n",r);
    }
    }
    else{
        cout<< -1;
    }


    return 0;
}
