#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<ll> v(n) , q(n);
    for(int i = 0 ; i < n; i++)
    {
        cin >> v[i];
        q[i] = v[i];
     }
       sort(v.begin() , v.end());
     bool is = 0;
     for(int i = 0; i < n; i++)
     {
         if(v[i] != q[n - i - 1])
         {
           //  cout<<"v[i]: "<<v[i]<<" "<<"q[n - i - 1]: "<<q[n - i - 1]<<'\n';
             is = 1;
             break;
         }
     }
     if(is == 0)
     {
         cout<<"yes\n";
         cout<<1<<" "<<n<<'\n';
         return 0;
     }

    int ok = 0;
    int p = 0, b = 100100, e = 0;
    ll mx = 0;
    for(int i = 0; i < n - 1; i++)
    {

       if(q[i + 1] <= q[i])
       {
           mx = max(mx , q[i]);
           if(ok == 2)
           {
               cout<<"no";
               return 0;
           }
           if(p == 0)
           {
               ok = 1;
               p = i;
               b = min(b , p);

               e = max(e , p);
           }
           else{
                    p = i;
                 //   cout<<"b: "<<b<<'\n';
                    b = min(b , p);
                    e = max(e , p);

           }
       }
       else if(mx > q[i + 1] && q[i + 1] > q[i] && i + 1 < n)
       {
           cout<<"no";
           return 0;
       }
       else if(ok == 1){
         ok = 2;
       }
      /*  if(v[i] != q[i])
        {
            if(p == 0)
            {
                p = i;
                b = min(b , p);
                e = max(e , p);
            }
            else{
                cout<<"i: "<<i <<" p + 1: "<<p + 1<<'\n';
                if(i != p + 1 )
                {

                    cout<<"no";
                    return 0;
                }
                else{
                    p = i;
                    b = min(b , p);
                    e = max(e , p);
                }
            }
        }*/
    }
    //cout<<"b: "<<b<<" e: "<<e<<'\n';

      if(b !=100100 && q[b - 1] > q[e + 1] && b - 1 >= 0)
       {
       //cout<<"q[b - 1]: "<<q[b - 1]<<" q[e + 1]: "<<q[e + 1]<<'\n';
           cout<<"no";
           return 0;
       }
    for(int i = b; i < e + 1; i++)
    {
        if(q[i] < q[i + 1])
        {
            cout<<"no";
            return 0;
        }
    }
    cout<<"yes\n";
    if(b == 100100)
    {
        cout<<1<<" "<<1<<'\n';
    }
    else{
    cout<<b + 1<<" "<<e + 2<<'\n';
    }
}
