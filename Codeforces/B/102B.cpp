#include<bits/stdc++.h>
using namespace std;

char str[1000000];
int cn(int p){
return (p==0)?0:(p%10+cn(p/10));
}
int main()
{
cin>>str;
if(strlen(str)==1){
    cout<<"0\n";
    return 0;
}
int ans=0;
for(char *i=str;*i;i++)
{
    ans+=(*i-'0');
}
int cnt=1;
while(ans>=10)
{
    ans =cn(ans);
    ++cnt;
}
cout<<cnt<<'\n';

}
