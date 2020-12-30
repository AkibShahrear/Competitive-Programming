#include<bits/stdc++.h>
using namespace std;
char s[200009];
int c[256];
int main()
{
    int i;
    cin>>i;
    scanf("%s",s);
    for(i = 0;s[i];i++)
        c[s[i]]++;
    if(c['I']>1) {cout<<0;return 0;}
    if(c['I']==1) {cout<<1; return 0;}
    cout<<c['A'];
}
