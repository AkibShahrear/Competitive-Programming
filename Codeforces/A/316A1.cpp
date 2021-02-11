#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<char>st;
    string s;
    cin >> s;
    long long cnt = 0;
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] >= 'A' && s[i] <= 'J'){
        st.insert(s[i]);
        }
    }

    if((s[0] - '0') >= 1  && (s[0] - '0') <= 9)
    {
        cnt = 1;
        for(int i = 1; i < s.length(); i++)
        {
              if((s[i] - '0') >= 1  && (s[i] - '0') <= 9)
              {
                  cnt *= 1;
              }
               if(s[i] == '?')
              {
                  cnt *= 10;
              }
        }
        int j = 10;
        for(int i = 0; i < st.size(); i++)
        {
            cnt *= j;
            j -= 1;
        }
        cout << cnt <<'\n';
    }
    else if(s[0] >= 'A'  && s[0] <= 'J')
    {
        cnt = 9;
        for(int i = 1; i < s.length(); i++)
        {
              if((s[i] - '0') >= 1  && (s[i] - '0') <= 9)
              {
                  cnt *= 1;
              }
               if(s[i] == '?')
              {
                  cnt *= 10;
              }
        }
        int j = 9;
        for(int i = 1; i < st.size(); i++)
        {
            cnt *= j;
            j -= 1;
        }
        cout<<cnt<<'\n';
    }
        else if(s[0] == '?')
    {
        cnt = 9;
        for(int i = 1; i < s.length(); i++)
        {
              if((s[i] - '0') >= 1  && (s[i] - '0') <= 9)
              {
                  cnt *= 1;
              }
               if(s[i] == '?')
              {
                  cnt *= 10;
              }
        }
        int j = 10;
        for(int i = 0; i < st.size(); i++)
        {
            cnt *= j;
            j -= 1;
        }
        cout << cnt;
    }
}
