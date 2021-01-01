#include<stdio.h>
#include<string.h>
int main()
{

    char g[100];
    gets(g);
    int len=strlen(g);


    int i;
    for(i=0;i<len;i++)
    {


        if(g[i]='1')
        {
            printf("`");
        }
        if(g[i]=='2')
        {
            printf("1");
        }
         else  if(g[i]=='3')
        {
            printf("2");
        }
         else  if(g[i]=='4')
        {
            printf("3");
        }
         else  if(g[i]=='5')
        {
            printf("4");
        }
         else  if(g[i]=='6')
        {
            printf("5");
        }
         else  if(g[i]=='7')
        {
            printf("6");
        }
         else  if(g[i]=='8')
        {
            printf("7");
        }
            else  if(g[i]=='9')
        {
            printf("8");
        }
         else  if(g[i]=='0')
        {
            printf("1");
        }
         else  if(g[i]=='-')
        {
            printf("9");
        }

           else  if(g[i]=='=')
        {
            printf("-");
        }
        /*   else  if(strcmp(g[i],'W')==0)
        {
            printf("Q");
        }
           else  if(strcmp(g[i],'E')==0)
        {
            printf("W");
        }
           else  if(strcmp(g[i],'R')==0)
        {
            printf("E");
        }
           else  if(strcmp(g[i],'T')==0)
        {
            printf("R");
        }
           else  if(strcmp(g[i],'Y')==0)
        {
            printf("T");
        }
           else  if(strcmp(g[i],'U')==0)
        {
            printf("Y");
        }
           else  if(strcmp(g[i],'I')==0)
        {
            printf("U");
        }
           else  if(strcmp(g[i],'O')==0)
        {
            printf("I");
        }
           else  if(strcmp(g[i],'P')==0)
        {
            printf("O");
        }
           else  if(strcmp(g[i],'[')==0)
        {
            printf("P");
        }
        */
    }
}
