#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
int t;
cin >> t;
while(t--){
int n;
cin >> n;
vi a(n);
for(int i = 0; i < n; i++)
{
    cin >> a[i];
}
int alice_cnt = 0, Bob_cnt = 0 , i = 0, j = n - 1 , cnt = 0, p = 0, q = 0;
while(true)
{
    if(i > j)
    {
        break;
    }
     p = 0;
    while(p <= q)
    {
        alice_cnt += a[i];
        p += a[i];
        i++;
         if(i > j)
        {
            break;
        }
    }
    cnt += 1;
    //cout<<"p: "<<p<<'\n';
    if(i > j)
    {
        break;
    }
    q = 0;
    while(q <= p)
    {
        Bob_cnt += a[j];
        q += a[j];
        j--;
        if(i > j)
        {
            break;
        }

    }
    cnt += 1;
  //  cout<<"q: "<<q<<'\n';
}
cout<<cnt<<" "<<alice_cnt<<" "<<Bob_cnt<<'\n';
}



}
