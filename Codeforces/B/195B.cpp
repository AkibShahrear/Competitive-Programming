#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;

void solve()
{
  int n , m;
  cin >> n >> m;
  int mid = (m + 1)/2;
  if(m%2 == 0)
  {
      if(n == 1)
      {
          cout<<mid<<'\n';
          return;
      }
      cout<<mid<<'\n'<<mid + 1<<'\n';
      n -= 2;
       int i = 1,j = 1, k = 2;
    while(n > 0)
    {
      if(j&1)
      {
        if(mid - i > 0)
        {
            cout<<mid - i<<'\n';
            i++;
        }
        else{
            cout<<mid<<'\n';
            i = 1;
        }
        j++;
      }
      else{
        if(mid + k <= m)
        {
            cout<<mid + k<<'\n';
        }
        else{
            cout<<mid + 1<<'\n';
            k = 1;
        }
        k++;
        j++;
      }
      n--;
      if(n == 0)
      {
          break;
      }
  }
  }
  else{
    cout<<mid<<'\n';
    n -= 1;
     int i = 1,j = 1;
  while(n > 0)
  {
      if(j&1)
      {
        if(mid - i > 0)
        {
            cout<<mid - i<<'\n';
        }
        else{
            cout<<mid<<'\n';
            i = 1;
            j++;
        }
        j++;
      }
      else{
        if(mid + i <= m)
        {
            cout<<mid + i<<'\n';
        }
        else{
            cout<<mid<<'\n';
            i = 1;
            j++;
        }
        i++;
        j++;
      }
      n--;
      if(n == 0)
      {
          break;
      }
  }
  }

}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);

    solve();

    return 0;
}
