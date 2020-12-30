#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t,sx,sy,ex,ey;
    int n=0,e=0,r=0,w=0;
    string s;
    cin>>t>>sx>>sy>>ex>>ey;
    if (sx>ex) w=sx-ex;
	else e=ex-sx;
	if (sy>ey) r=sy-ey;
	else n=ey-sy;
    cin>>s;
  //  cout<<"n: "<<n<<"s: "<<r<<"w: "<<w<<"e: "<<e<<'\n';


    for(int i=0;i<t;i++)
    {
        if(s[i]=='E')
        {
            e--;

             //cout<<"sx: "<<sx<<" sy: "<<sy<<'\n';
        }
        else if(s[i]=='S')
        {
            r--;
            //sy-=1;
              //cout<<"sx: "<<sx<<" sy: "<<sy<<'\n';
        }
        else if(s[i]=='W')
        {
            w--;
            //sx-=1;
              //cout<<"sx: "<<sx<<" sy: "<<sy<<'\n';
        }
        else
            {
                    n--;
                    //sy+=1;
                      //cout<<"sx: "<<sx<<" sy: "<<sy<<'\n';
                }
             if(r<=0 && n<=0 && e<=0 && w<=0)
             {
                 cout<<i+1;
                 return 0;
             }


    }
    cout<<"-1";
    return 0;


}
