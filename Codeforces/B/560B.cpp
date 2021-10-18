#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
int a1,b1,a2,b2,a3,b3;
bool is(int x1, int y1, int x2 , int y2)
{
    if(max(x1 , x2) > a1 || max(y1 , y2) > b1 || (x1 + x2 > a1 && y1 + y2 > b1))
    {
        return true;
    }
    return false;
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin>>a1>>b1>>a2>>b2>>a3>>b3;
 bool p = is(a2,b2,a3,b3) && is(a2,b2,b3,a3) && is(b2,a2,a3,b3) &&  is(b2,a2,b3,a3);
 if(p == true)
 {
     cout<<"NO";
 }
 else{
    cout<<"YES";
 }
    return 0;
}
