#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int , int> pi;

void solve()
{
    bool is = 0;
    char c;
    string s = "";

    while(scanf("%c",&c) == 1){
        if(c == '\"'){
            if(is){
                printf("<%s>\n",s.c_str());
                is = 0; s = "";
            }
            else{
             is = 1;
            }
        }
        else if(c == ' ' || c == '\n'){
            if(is){s += c;}
            else{
                if(s.size()){
                    printf("<%s>\n" , s.c_str());
                    s = "";
                }
            }
        } else s += c;

    }
    if(s.size()){
        printf("<%s>\n",s.c_str());
    }
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);

    solve();

    return 0;
}

