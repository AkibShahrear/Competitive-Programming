#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int l=(int)(s[0]-'0')*10+(int)(s[1]-'0');
    int p=(int)(s[3]-'0')*10+(int)(s[4]-'0');
    if(l==1)
    {
        if(p==10)
        {
            cout<<0;
            return 0;
        }
        else if(p<10)
        {
            cout<<10-p;
            return 0;
        }
        else{
            cout<<(60-p)+20;
        }

    }
   else if(l==2)
    {
        if(p==20)
        {
            cout<<0;
            return 0;
        }
        else if(p<20)
        {
            cout<<20-p;
            return 0;
        }
        else{
            cout<<(60-p)+30;
        }

    }
    else if(l==3)
    {
        if(p==30)
        {
            cout<<0;
            return 0;
        }
        else if(p<30)
        {
            cout<<30-p;
            return 0;
        }
        else{
            cout<<(60-p)+40;
        }

    }
        if(l==4)
    {
        if(p==40)
        {
            cout<<0;
            return 0;
        }
        else if(p<40)
        {
            cout<<40-p;
            return 0;
        }
        else{
            cout<<(60-p)+50;
        }

    }
     else if(l==5)
    {
        if(p==50)
        {
            cout<<0;
            return 0;
        }
        else if(p<50)
        {
            cout<<50-p;
            return 0;
        }
        else{
            cout<<4*60+(60-p)+1;
        }

    }
       else if(l==6)
    {
       cout<<3*60+(60-p)+1;
    }
    else if(l==7)
    {
        cout<<2*60+(60-p)+1;
    }
    else if(l==8)
    {
        cout<<60+(60-p)+1;
    }

     else if(l==9)
    {
            cout<<(60-p)+1;
    }
    else  if(l==10)
    {
        if(p==01)
        {
            cout<<0;
            return 0;
        }
        else if(p<1)
        {
            cout<<1-p;
            return 0;
        }
        else{
            cout<<(60-p)+11;
        }
    }
    else if(l==11)
    {
        if(p==11)
        {
            cout<<0;
            return 0;
        }
        else if(p<11)
        {
            cout<<11-p;
            return 0;
        }
        else{
            cout<<(60-p)+21;
        }
    }
    else if(l==12)
    {
        if(p==21)
        {
            cout<<0;
            return 0;
        }
        else if(p<21)
        {
            cout<<21-p;
            return 0;
        }
        else{
            cout<<(60-p)+31;
        }

    }
    else  if(l==13)
    {
        if(p==31)
        {
            cout<<0;
            return 0;
        }
        else if(p<31)
        {
            cout<<31-p;
            return 0;
        }
        else{
            cout<<(60-p)+41;
        }

    }
    else if(l==14)
    {
        if(p==41)
        {
            cout<<0;
            return 0;
        }
        else if(p<41)
        {
            cout<<41-p;
            return 0;
        }
        else{
            cout<<(60-p)+51;
        }

    }
        if(l==15)
    {
        if(p==51)
        {
            cout<<0;
            return 0;
        }
        else if(p<51)
        {
            cout<<10-p;
            return 0;
        }
        else{
            cout<<4*60+(60-p)+2;
        }


    }
    else if(l==16)
    {
        cout<<3*60+(60-p)+2;
    }
    else if(l==17)
    {
        cout<<2*60+(60-p)+2;
    }
    else if(l==18)
    {
        cout<<60+(60-p)+2;
    }
    else  if(l==19)
    {

        {
            cout<<(60-p)+2;
            return 0;
        }

    }
    else     if(l==20)
    {
        if(p==2)
        {
            cout<<0;
            return 0;
        }
        else if(p<2)
        {
            cout<<2-p;
            return 0;
        }
        else{
            cout<<(60-p)+12;
        }

    }
    else  if(l==21)
    {
        if(p==12)
        {
            cout<<0;
            return 0;
        }
        else if(p<12)
        {
            cout<<12-p;
            return 0;
        }
        else{
            cout<<(60-p)+22;
        }

    }
    else     if(l==22)
    {
        if(p==22)
        {
            cout<<0;
            return 0;
        }
        else if(p<22)
        {
            cout<<22-p;
            return 0;
        }
        else{
            cout<<(60-p)+32;
        }

    }
    else  if(l==23)
    {
        if(p==32)
        {
            cout<<0;
            return 0;
        }
        else if(p<32)
        {
            cout<<32-p;
            return 0;
        }
        else{
            cout<<(60-p);
        }

    }
}
