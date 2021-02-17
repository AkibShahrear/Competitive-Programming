/*
first --> you
then --> slavik
n doors
i-->ai
1 2 4 2 3
1 2 4 2 0
1 5 4 2 0
0 5 4 2 0
0 5 4 5
*/
#include<bits/stdc++.h>
using namespace std;
int a[1000000];
int main()
{
    int n , x ,y;
    cin >> n >> x >> y;
    int cnt = 0;
    for(int i = 0;i < n; i++)
    {
        cin >> a[i];
        if(a[i] <= x)
        {
            cnt++;
        }
    }
    //cout<<"cnt: "<<cnt<<'\n';
  if(x > y)
  {
      cout<<n;
  }
  else{
    cout<<(cnt + 1)/2<<endl;
  }
    return 0;
}
