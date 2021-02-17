/*
1 2 3 4 5
1 2 5 4 3
1 2 3 4 5 6
1 2 3 6 5 4
1 2 2 3 3 4 4
1 1 2 2 3
1 1 2 3 4 2
1 1 2 2 3
2 1 1 2 3
93 1153 900 2819 2825
900 93 1153
*/
#include<bits/stdc++.h>
using namespace std;
long long a[200];
int main()
{
    int n;
    cin >> n;
    for(int i = 0;i < n; i++)
    {
        cin >> a[i];
    }
    sort(a , a + n);
   deque<long long>d;
   for(int i = 0;i < n; i++)
   {
       if(i % 2 == 0)d.push_back(a[i]);
       else d.push_front(a[i]);
   }
   for(long long x : d)cout << x << " ";
   cout<<endl;
   return 0;

    return 0;
}
