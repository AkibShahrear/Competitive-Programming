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
    vi v(n);
    string s = "";
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
        if(i == 0)
        {
        //    cout<<"Hi\n";
            if(v[i] == 0)
            {
                s += "R";
            }
            else{
            for(int j = 1; j <= v[i]; j++)
            {
                if(j == v[i])
                {
                    s += "PR";

                }
                else{
                    s += "PRL";
                }
            }
        }
    }
   else if(i == n - 1)
        {
          //  cout<<"Hi2\n";
       /*     if(v[i] == 0)
            {
                s += "R";
            }*/
            //else{
            for(int j = 1; j <= v[i]; j++)
            {
                if(j == v[i])
                {
                    s += "P";
                }
                else{
                    s += "PLR";
                }
            }
        //}
    }
     else
        {
            //cout<<"Hi3\n";
            if(v[i] == 0)
            {
                s += "R";
            }
            else{
            for(int j = 1; j <= v[i]; j++)
            {
                if(j == v[i])
                {
                    s += "PR";
                }
                else{
                    s += "PRL";
                }
            }
        }
    }

    }
    cout<<s;
    return 0;
}
