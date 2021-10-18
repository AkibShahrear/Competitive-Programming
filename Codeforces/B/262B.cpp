#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;
int a[2000000];
int main()
{
ios::sync_with_stdio(0);
cin.tie(0);

int n , k;
cin >> n >> k;
int q = k;
vi neg , pos;
ll sum = 0;
for(int i = 0; i < n ; i++)
{
    cin >> a[i];
    if(a[i] < 0)
    {
        neg.push_back(a[i]);
    }
    else{
        pos.push_back(a[i]);
        //sum += a[i];

    }
}
sort(neg.begin() , neg.end());
for(int i = 0; i < neg.size(); i++)
{
    neg[i] = ((-1)*neg[i]);
    k--;
    if(k == 0)
    {
        break;
    }
}
if(k != 0){
sort(pos.begin(), pos.end());
int l = neg.size();
int p = q - l;
if(l == n)
{
    int r = q - n;
    if(r % 2 == 0)
    {
        neg[l - 1] = neg[l - 1];
    }
    else{
        neg[l - 1] = (-1) * neg[l - 1];
    }
}
else if(n == pos.size())
{

    if(q % 2 == 0)
    {
        pos[0] =  pos[0];
    }
    else{
        pos[0] =  (-1)*pos[0];
    }
}


//cout<<"p: "<<p<<'\n';
else if(abs(neg[l - 1]) < pos[0])
{
    if(p % 2 == 0)
    {
        neg[l - 1] = abs(neg[l - 1]);
    }
    else{
        neg[l - 1] = (-1) * abs(neg[l - 1]);
    }
}
else{

    if(p % 2 == 0)
    {
        pos[0] = pos[0];
    }
    else{
        pos[0] = (-1) * pos[0];
    }

}
}
//cout<<"sum: "<<sum<<'\n';
for(int i = 0 ;i < pos.size(); i++)
{
    sum += pos[i];
}
for(int i = 0 ;i < neg.size(); i++)
{
    sum += neg[i];
}
cout<<sum;
    return 0;
}
