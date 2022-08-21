#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=1,j=n;i<=n;i++,j--)
    {
        if(j==1)
        {
            if(i%2==0)
            {
                printf("I love it ");
            }
            else{
                printf("I hate it ");
            }
        }
        else if(i%2==0)
        {
            printf("I love that ");
        }

        else
        {
            printf("I hate that ");
        }
    }
    printf("\n");
    return 0;
}
