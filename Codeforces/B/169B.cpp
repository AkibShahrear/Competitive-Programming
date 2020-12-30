/*
int a consists of n digits
sequence of digits s of length m
the digit in position j of sequence
s means that you can choose an
arbitrary position i(1 <= i <= n)
*/
#include<bits/stdc++.h>
using namespace std;
vector<int>v;
int main()
{
    string a,b;
    cin >> a;
    cin >> b;
    for(int i = 0; i < b.length(); i++)
    {

        v.push_back((b[i] - '0'));
    }
    sort(v.rbegin(),v.rend());
    /*for(int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<'\n';
    }*/
    v.push_back(-1);
    int j = 0;
    for(int i = 0; i < a.length(); i++)
    {
        int x = (a[i] - '0');
        if(x < v[j])
        {
            cout<<v[j];
            j++;
        }
        else{
            cout<<x;
        }
    }
    v.clear();


    return 0;
}
