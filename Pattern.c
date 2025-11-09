#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int star = 1;
    int space = n-1;
    int k = 1;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=space; j++)
        {
            printf(" ");
        }
        for(int j=1; j<=star; j++)
        {
            if(k%2 == 1)
            {
                printf("#");
            }
            else
            {
                printf("-");
            }
        }   
        k ++;
        printf("\n");
        star += 2;
        space --;
    } 
    star -= 4;
    space = 1;
    for(int i=n-1; i>=1; i--)
    {
        for(int j=1; j<=space; j++)
        {
            printf(" ");
        }
        for(int j=1; j<=star; j++)
        {
            if(k%2 == 1)
            {
                printf("#");
            }
            else
            {
                printf("-");
            }
        }
        k ++;   
        printf("\n");
        star -= 2;
        space ++;
    }
    return 0;
}
