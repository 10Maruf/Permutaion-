#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
 system("color 0a");
    int a,b,c,count=0;
    int n;
    for (a=1;a<=3;a++)
      {
         for (b=1;b<=3;b++)
         {
            for (c=1;c<=3;c++)
            {
                if (a!=b && b!=c && c!=a)
               {
                  count++;
                   printf("%d.(%d,%d,%d)\n",count,a,b,c);
               }
            }
         }
      }

    getch();
    return 0;
    
}
