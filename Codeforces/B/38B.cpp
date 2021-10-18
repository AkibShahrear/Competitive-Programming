#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;

int main()
{
    string a , b;
    cin >> a >> b;
    int p = a[1] - '0';
    int q = b[1] - '0';
    int r = (int)(a[0] - 'a');
    int s = (int)(b[0] - 'a');
    //cout<<p<<q;
    int l = 0;
    if(abs(q - p) == 1 || abs(r - s) == 1)
    {
         l = abs(q - p) + abs(r - s);
         l = min(l , 4);
    }



}
