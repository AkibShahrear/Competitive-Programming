/*
T-shirt
K participants

*/
#include<bits/stdc++.h>
using namespace std;
string a[1202];
string b[] = {"S","M","L","XL","XXL"};
int main()
{
    int Ns,Nm,Nl,Nxl,Nxxl;
    cin >> Ns >> Nm >> Nl >> Nxl >> Nxxl;
    int k;
    cin >> k;
    for(int i = 0; i < k; i++)
    {
        string s;
        cin >> s;
        if(s == "S")
        {
            if(Ns > 0)
            {
                Ns--;
                cout<<"S\n";
            }
            else if(Nm > 0)
            {
                Nm--;
                cout<<"M\n";
            }
            else if(Nl > 0)
            {
                Nl--;
                cout<<"L\n";
            }
            else if(Nxl > 0)
            {
                Nxl--;
                cout<<"XL\n";
            }
            else if(Nxxl > 0)
            {
                Nxxl--;
                cout<<"XXL\n";
            }
        }
        else if(s == "M")
        {
            if(Nm > 0)
            {
                Nm--;
                cout<<"M\n";
            }

            else if(Nl > 0)
            {
                Nl--;
                cout<<"L\n";
            }
             else if(Ns > 0)
            {
                Ns--;
                cout<<"S\n";
            }
            else if(Nxl > 0)
            {
                Nxl--;
                cout<<"XL\n";
            }
            else if(Nxxl > 0)
            {
                Nxxl--;
                cout<<"XXL\n";
            }

        }
        else if(s == "L")
        {
            if(Nl > 0)
            {
                Nl--;
                cout<<"L\n";
            }

            else if(Nxl > 0)
            {
                Nxl--;
                cout<<"XL\n";
            }
            else if(Nm > 0)
            {
                Nm--;
                cout<<"M\n";
            }
            else if(Nxxl > 0)
            {
                Nxxl--;
                cout<<"XXL\n";
            }
             else if(Ns > 0)
            {
                Ns--;
                cout<<"S\n";
            }
        }
        else if(s == "XL")
        {
            if(Nxl > 0)
            {
                Nxl--;
                cout<<"XL\n";
            }
            else if(Nxxl > 0)
            {
                Nxxl--;
                cout<<"XXL\n";
            }

            else if(Nl > 0)
            {
                Nl--;
                cout<<"L\n";
            }
            else if(Nm > 0)
            {
                Nm--;
                cout<<"M\n";
            }

             else if(Ns > 0)
            {
                Ns--;
                cout<<"S\n";
            }
        }
        else if(s == "XXL")
        {
            if(Nxxl > 0)
            {
                Nxxl--;
                cout<<"XXL\n";
            }
            else if(Nxl > 0)
            {
                Nxl--;
                cout<<"XL\n";
            }

            else if(Nl > 0)
            {
                Nl--;
                cout<<"L\n";
            }
            else if(Nm > 0)
            {
                Nm--;
                cout<<"M\n";
            }

             else if(Ns > 0)
            {
                Ns--;
                cout<<"S\n";
            }
        }
    }

    return 0;
}
