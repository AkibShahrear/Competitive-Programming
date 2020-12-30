#include<iostream>
using namespace std;
int main()
{
    int n;
    char s[100],k[100];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>s[i];

    }
    int temp=0,cnt=0;
    for(int j=0;j<n;j++)
    {
        if(s[j]=='S' && s[j+1] == 'F' )
        {
            ++temp;
        }
        else if(s[j] == 'F' && s[j+1] == 'S')
        --temp;
    }

    if(temp>0)
    cout<<"Yes";
    else
    cout<<"No";

}
