/*
n rooms
rooms are connected by n
conveyor belts
i-th conveyor belt connects
the room i and (i + 1)%n
clockwise >==> i --> (i + 1)mod n
anticlockwise <==> (i + 1)mod n --> i
if it is off either direction
    clockwise (>)
    anticlockwise (<)
    4(1-->2<--3<--4
    5(1 --> 2 --> 3 --> 4 --> 5)
    3(1 <-- 2 <--3)
    5(1<--2<---  --->3-->4-->5)
    6(1>2>3<4>5>6)
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n;
        cin >> n;
        string s;
        cin >> s;
        bool c = 0,ac = 0;
        for(int i = 0; i < s.length(); i++)
        {
         if(s[i] == '<') c = 1;
         if(s[i] == '>') ac = 1;

        }
        if(c && ac)
        {
            int sum = 0;
            //s += s[0];
            for(int i = 0; i < s.length() ; i++)
            {
                if(s[i] == '-' || s[i + 1] == '-')
                {
                    sum++;
                }
            }
            cout<<sum<<'\n';
        }
        else{
            cout<<n<<'\n';
        }
    }
    return 0;
}
