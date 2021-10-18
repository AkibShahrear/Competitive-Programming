#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;
const long double eps = 1e-9;
int main()
{
    double vb , vs;
    int n;
    cin >> n >> vb >> vs;
    vector<double> x(n);
    for(int i = 0; i < n; i++)
    {
        cin >> x[i];
    }
    double a , b;
    cin >> a >> b;
    int m = 0, pos = 0 , l , r, out;
    vector<pair<ll , ll> > w;
    double h = 1e50;
    double k = 1e50;
    int idx = -1;
    for(int i = 1; i < n; ++i)
    {
        //cout<<"x[i]: "<<x[i]<<'\n';
        double t = (x[i]/vb);
        double p = (a - x[i])*(a - x[i]);
        double q = b*b;
       // cout<<"p: "<<p<<" q: "<<q<<'\n';
        double l = sqrt(p + q);
        double t1 = (l / vs);
        //cout<<"t: "<<t<<" t1: "<<t1<<'\n';
        //cout<<"l: "<<l<<'\n';
        double r = t1 + t;
        if(r < h - eps || (r < h + eps && l < k - eps))
        {
            h = r;
            k = l;
            pos = i + 1;
        }

    }
    cout<<pos;



    }
