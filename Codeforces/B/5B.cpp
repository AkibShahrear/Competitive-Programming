#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;
string s[1100];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    vector<string> v;
    int mx = 0;
    while(getline(cin,s)){
        v.push_back(s);
        int l = s.length();
        mx = max(mx , l);
    }
    int n = v.size();
    int *a = new int[n];
    int *b = new int[n];
    int is = 0;
    for(int i = 0; i < v.size(); i++)
    {
        int k = mx - v[i].length();

        if(k % 2 == 0){ a[i] = k / 2; }
        else {a[i] = (k / 2) + is , is = 1 - is;}
        b[i] = k - a[i];
    }
    for(int i = 0; i < mx + 2; i++)
    {
        cout<<"*";
    }
    cout<<endl;
    for(int i = 0; i < v.size(); i++)
    {
        cout<<'*';
        for(int j = 0; j < a[i]; j++)
        {
            cout<<' ';
        }
        cout<<v[i];
        for(int j = 0; j < b[i]; j++)
        {
            cout<<' ';
        }
        cout<<'*'<<endl;
    }
    for(int i = 0; i < mx + 2; i++)
    {
        cout<<'*';
    }
    cout<<endl;

    return 0;
}
