/*
n ordered piles of worms
i --> ai
label -->1st pile 1 -- a1
         2nd pile a1+1 ==> a1 + a2
input ==>n
        a1,a2..an
        m ==>juicy worms
        q1,q2...qm
*/
#include<bits/stdc++.h>
using namespace std;
long long a[201000],q[101000],b[2000010],c[1001200];
int main()
{
 int n,m;
 cin >> n;
 int l = 0;
 for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        for(int j = 0; j < x; j++)
        {
            b[++l] = i + 1;
        }
    }
  cin >> m;
  for(int i = 1; i <= m; i++)
  {
      cin>>q[i];
      cout<<b[q[i]]<<'\n';
  }


    return 0;
}
