/*ternery logic
xor operation
tor
a tor b
*/

#include<bits/stdc++.h>
using namespace std;
vector<int>ter(int n){
vector<int>v;
do{
    v.push_back(n % 3);
    n /= 3;
}
while(n > 0);
return v;
}


int main()
{
 long long a,b;
 cin>>a>>b;
 vector<int>v,r,y;
 v = ter(a);
 r = ter(b);

    while(v.size() != r.size()){
        if(v.size() > r.size()) {r.push_back(0);}
        else {v.push_back(0);}

    }
    /*for(int i = 0; i < v.size(); i++)
    {
        cout<<"v[i]: "<<v[i]<<" r[i]: "<<r[i]<<'\n';
    }*/


        for(int i = 0; i < v.size(); i++)
        {
            if(r[i] == 0)
            {
                if(v[i] == 0)
                {
                    y.push_back(0);
                }
                else if(v[i] == 1)
                {
                    y.push_back(2);
                }
                else if(v[i] == 2)
                {
                    y.push_back(1);

                }
            }
            if(r[i] == 1)
            {
                if(v[i] == 0)
                {
                    y.push_back(1);

                }
                else if(v[i] == 1)
                {
                    y.push_back(0);

                }
                else if(v[i] == 2)
                {
                    y.push_back(2);

                }
            }
            if(r[i] == 2)
            {
                if(v[i] == 0)
                {
                    y.push_back(2);

                }
                else if(v[i] == 1)
                {
                    y.push_back(1);

                }
                else if(v[i] == 2)
                {
                    y.push_back(0);
                }
            }
        }
        long long sum = 0;
        int j = 0;//y.size() - 1;
        for(int i = 0; i < y.size(); i++)
        {
           // cout<<"y[j]: "<<y[j]<<'\n';
            sum += (y[j]*(pow(3,i)));
            j++;
           // cout<<sum<<'\n';
        }
        cout<<sum;


}
