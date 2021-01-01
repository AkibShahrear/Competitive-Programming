#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int main()
{

    char arr[1000];

    while(gets(arr))
    {
        int sum=0;
        int len = strlen(arr);
        for(int i=0;i<len;i++)
        {
            if(arr[i]=='a')
            {
                sum=sum+1;
            }
            else if(arr[i]=='b')
            {
                sum=sum+2;
            }
            else if(arr[i]=='c')
            {
                sum=sum+3;
            }
            else if(arr[i]=='d')
            {
                sum=sum+4;
            }
            else if(arr[i]=='e')
            {
                sum=sum+5;
            }
            else if(arr[i]=='f')
            {
                sum=sum+6;
            }
            else if(arr[i]=='g')
            {
                sum=sum+7;
            }
            else if(arr[i]=='h')
            {
                sum=sum+8;
            }
            else if(arr[i]=='i')
            {
                sum=sum+9;
            }
            else if(arr[i]=='j')
            {
                sum=sum+10;
            }
            else if(arr[i]=='k')
            {
                sum=sum+11;
            }
            else if(arr[i]=='l')
            {
                sum=sum+12;
            }
            else if(arr[i]=='m')
            {
                sum=sum+13;
            }
            else if(arr[i]=='n')
            {
                sum=sum+14;
            }
            else if(arr[i]=='o')
            {
                sum=sum+15;
            }
            else if(arr[i]=='p')
            {
                sum=sum+16;
            }
            else if(arr[i]=='q')
            {
                sum=sum+17;
            }
            else if(arr[i]=='r')
            {
                sum=sum+18;
            }
            else if(arr[i]=='s')
            {
                sum=sum+19;
            }
            else if(arr[i]=='t')
            {
                sum=sum+20;
            }
            else if(arr[i]=='u')
            {
                sum=sum+21;
            }
            else if(arr[i]=='v')
            {
                sum=sum+22;
            }
            else if(arr[i]=='w')
            {
                sum=sum+23;
            }
            else if(arr[i]=='x')
            {
                sum=sum+24;
            }
            else if(arr[i]=='y')
            {
                sum=sum+25;
            }
            else if(arr[i]=='z')
            {
                sum=sum+26;
            }
              if(arr[i]=='A')
            {
                sum=sum+27;
            }
            else if(arr[i]=='B')
            {
                sum=sum+28;
            }
            else if(arr[i]=='C')
            {
                sum=sum+29;
            }
            else if(arr[i]=='D')
            {
                sum=sum+30;
            }
            else if(arr[i]=='E')
            {
                sum=sum+31;
            }
            else if(arr[i]=='F')
            {
                sum=sum+32;
            }
            else if(arr[i]=='G')
            {
                sum=sum+33;
            }
            else if(arr[i]=='H')
            {
                sum=sum+34;
            }
            else if(arr[i]=='I')
            {
                sum=sum+35;
            }
            else if(arr[i]=='J')
            {
                sum=sum+36;
            }
            else if(arr[i]=='K')
            {
                sum=sum+37;
            }
            else if(arr[i]=='L')
            {
                sum=sum+38;
            }
            else if(arr[i]=='M')
            {
                sum=sum+39;
            }
            else if(arr[i]=='N')
            {
                sum=sum+40;
            }
            else if(arr[i]=='O')
            {
                sum=sum+41;
            }
            else if(arr[i]=='P')
            {
                sum=sum+42;
            }
            else if(arr[i]=='Q')
            {
                sum=sum+43;
            }
            else if(arr[i]=='R')
            {
                sum=sum+44;
            }
            else if(arr[i]=='S')
            {
                sum=sum+45;
            }
            else if(arr[i]=='T')
            {
                sum=sum+46;
            }
            else if(arr[i]=='U')
            {
                sum=sum+47;
            }
            else if(arr[i]=='V')
            {
                sum=sum+48;
            }
            else if(arr[i]=='W')
            {
                sum=sum+49;
            }
            else if(arr[i]=='X')
            {
                sum=sum+50;
            }
            else if(arr[i]=='Y')
            {
                sum=sum+51;
            }
            else if(arr[i]=='Z')
            {
                sum=sum+52;
            }
        }

int flag=1;
    for(int i=2;i*i<=sum;i++)

        if(sum%i==0){
          flag=0;
          break;
        }
        if(flag==1)
    {
         cout<<"It is a prime word.\n";

    }
    else
        cout<<"It is not a prime word.\n";
    }



return 0;

}
