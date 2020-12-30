#include<bits/stdc++.h>
using namespace std;
char arr[]={'1','2','3','4','5','6','7','8','9'};
char arr1[]={'0','1','2','3','4','5','6','7','8','9'};

int main()
{
    string s,p,a = "";
    cin>>s;
    cin>>p;
    bool is = 0;
        for(int j = 0; j < sizeof(arr); j++)
        {
        for(int i = 0; i < s.length(); i++)
           {


            if(arr[j] == s[i]){
                is = 1;
           // cout<<"arr[j]: "<<arr[j]<<'\n';
            //cout<<s[i]<<'\n';
            a += s[i];
            s[i] = 'x';
            break;

            }
           }
           if(is)
           {
               break;
           }
    }
     for(int j = 0; j < sizeof(arr1); j++)
        {
        for(int i = 0; i < s.length(); i++)
           {
               is = 1;
            if(arr1[j] == s[i]){
            //cout<<s[i];
            a += s[i];
            s[i] = 'x';
          //  break;

            }
           }

    }
    if(p == a)
    {
        cout<<"OK";
    }
    else{
        cout<<"WRONG_ANSWER";
    }
}
