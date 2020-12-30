#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    while(n--)
    {
        string s;
        cin>>s;
        int l=s.size();
         set<char>str;


            //sort(s.begin(),s.end());
            for(int i=0,j=0;i<l;i=j)
            {
            while(j<l && s[i]==s[j])
                j++;

            if((j-i)%2!=0)
                str.insert(s[i]);
              cout<<"i: "<<i<<'\n';



            }
            cout<<string(str.begin(),str.end())<<'\n';
}

}

