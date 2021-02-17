#include<bits/stdc++.h>
using namespace std;
int t[1000000];
int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> t[i];
    }
    int a = 0 , b = 0, i = 0, j = 0 , k = 0, l = n - 1;
    while(a + b < n)
    {
        if(i == 0 && j == 0){
            i += t[k];
            j += t[l];
        }
        if(i < j)
        {
            k++;
            i += t[k];
            a++;
        }
        else if(i > j)
        {
            l--;
            j += t[l];
            b++;
        }
        else{
            k++;
            i += t[k];
            a++;
        }
    }
    cout<<a <<" "<< b;
    return 0;
}
