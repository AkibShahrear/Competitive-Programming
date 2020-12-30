#include<bits/stdc++.h>
using namespace std;
int arr[100005];
int main()
{
    string s;
    cin>>s;
    int len=s.length();
    int t;
    for(int i=0;i<len;i++)
    {
        arr[i+1]=arr[i];
        if(s[i]==s[i+1]) ++arr[i+1];
    }
    cin>>t;
    while(t--){
    int a,b;
    cin>>a>>b;
    int cnt=0;
    --a;--b;
    cout<<arr[b]-arr[a]<<'\n';

}
}
