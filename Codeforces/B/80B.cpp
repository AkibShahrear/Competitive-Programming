#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int h , m;
    scanf(" %d:%d ",&h , &m);
    h %= 12;
    long double mn = m*6;
    //cout<<mn<<'\n';
    long double hr = ((double)h * 30) + (0.5 * (double)m);
    //cout<<hr<<'\n';
    printf("%.1lf %0.1lf",(double)hr , (double)mn);

    return 0;
}
