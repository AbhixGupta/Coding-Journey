#include<stdio.h>
void main()
{
    int N,i=1,a[2],m;
    scanf("%d",&N);
    while(N>0)
    {
        if((N-i)<=0)
          {
              m=1;
                break;
          }
        N=N-i;
        if((N-2*i)<=0)
        {
              m=2;
              break;
        }
        N=N-2*i;
        i++;
    }
    if(m==1)
        printf("Patlu");
    else if(m==2)
        printf("Motu");
}
