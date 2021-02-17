/*
n daughters
 memset(a,0,n * sizeof *a);

*/
#include<bits/stdc++.h>
using namespace std;
#define N 100000
int main()
{

    int t;
    cin >> t;
    while(t--)
    {
        static char a[N];
        int n;
        cin >> n;
        bool is = 1;
        memset(a,0,n * sizeof *a);
        int p = -1;
        for(int i = 0; i < n; i++)
        {
            int k;
            cin >> k;
            int cnt = 0;
           while(k--)
            {
                int x;
                cin >> x; x--;
                if(!a[x] && !cnt)
                {
                    cnt = 1;
                    a[x] = 1;

                }
            }
            if(!cnt && p == -1)
            {
              is = 0;
                p = i ;

            }
        }
        if(p == -1){
        cout<<"OPTIMAL\n";
        continue;
        }

              cout<<"IMPROVE\n";
                for(int g = 0;g < n; g++)
                {
                    if(!a[g])
                    {
                        cout<<p + 1<<" "<<g+1 <<'\n';
                        break;
                    }
                }


    }


   return 0;
}
