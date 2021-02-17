#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,j = 11;
    cin >> n;
    for(int i = 0;i < n; i++)
    {
        cout << j <<" ";
        if(i%2==0){
        j += 4;
        }
        else{
            j += 5;
        }
    }

}
