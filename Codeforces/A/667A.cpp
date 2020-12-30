#include<bits/stdc++.h>
using namespace std;
#define pi acos(-1.00)
int main()
{
    double a,b,c,d,e,f,g,h;
    cin>>a>>b>>c>>d;
        e=pi*(a/2)*(a/2);


         if((pi*(a/2)*(a/2)*d)>c )
    {
        cout<<"NO\n";
    }
    else{
        cout<<"YES\n";
    f=c/e;
        g=f-d;
        h=b/g;
        printf("%.12lf\n",h);

    }

}
