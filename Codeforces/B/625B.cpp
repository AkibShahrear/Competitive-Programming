#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s , p;
    cin >> s;
    cin >> p;
    int l = p.length();
    int cnt  = 0;
    if(l > s.length()){
        cout<<0;
        return 0;
    }
    for(int i = 0; i < s.length() - l + 1; i++)
    {
        string y = s.substr(i , l);
      //  cout << y << '\n';


        if(y == p){
          cnt += 1;
        i += (l - 1);
        }

    }
    cout<< cnt;
    return 0;
}
