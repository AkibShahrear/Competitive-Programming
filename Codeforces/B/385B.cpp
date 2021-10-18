#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;

int main()
{
string s;
cin >> s;
ll p = 0;
ll cnt = 0;
if(s.length() < 4)
{
    cout<<0;
    return 0;
}
for(int i = 0; i < s.length() - 3; i++)
{
    string str = s.substr(i , 4);
    if(str == "bear")
    {
        int a  = s.length() - (i + 3);
       // cout<<"a: "<<a<<'\n';
        cnt += a;
        if(i != 0){
        int y = (i - p)* a;
        //cout<<"y: "<<y<<'\n';
        cnt += y;
        }
        p = i + 1;
    }

}
cout<<cnt;


}

