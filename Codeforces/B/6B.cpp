#include<bits/stdc++.h>
using namespace std;
char a[200][200];
set<char>s;
int main()
{
    int n,m;
    char c;
    cin>>n>>m>>c;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(a[i][j]==c)
            {
                char l=a[i-1][j],o=a[i+1][j],p=a[i][j+1],q=a[i][j-1];

                if(l!=c && l>='A' && l<='Z')
                {
                    s.insert(l);
                }
                 if(o!=c && o>='A' && o<='Z')
                {
                    s.insert(o);
                }
                 if(p!=c && p>='A' && p<='Z')
                {
                    s.insert(p);
                }
                 if(q!=c && q>='A' && q<='Z')
                {
                    s.insert(q);
                }

            }
        }
    }
    cout<<s.size();
}
