#include<bits/stdc++.h>
using namespace std;
char  s[1000];
int main()
{
    int n;
    cin >> n;
    getchar();
    while(n--)
    {
        gets(s);
        int l = strlen(s);
        if((s[0] == 'm' && s[1] == 'i' && s[2] == 'a' && s[3] == 'o' && s[4] == '.') && (s[l - 1] == '.' && s[l - 2] == 'a' && s[l - 3] == 'l' && s[l - 4] == 'a' && s[l - 5] == 'l'))
        {
            cout << "OMG>.< I don't know!\n";
        }
        else if(s[0] == 'm' && s[1] == 'i' && s[2] == 'a' && s[3] == 'o' && s[4] == '.')
        {
            cout << "Rainbow's\n";
        }
        else if(s[l - 1] == '.' && s[l - 2] == 'a' && s[l - 3] == 'l' && s[l - 4] == 'a' && s[l - 5] == 'l')
        {
            cout << "Freda's\n";
        }
        else{
            cout << "OMG>.< I don't know!\n";
        }
    }
}
