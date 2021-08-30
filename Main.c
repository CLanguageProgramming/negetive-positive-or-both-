#include <stdio.h>

int main()
{
    printf("A = ");
    int a;
    scanf("%d", &a);
    printf("B = ");
    int b;
    scanf("%d", &b);
    int c = a^b;
    if(c<0)
    {
        printf("%d and %d are on either side of 0", a, b);
    }
    else
    {
        if(a > 0)
        {
            printf("%d and %d are on the right side of 0",a , b);
        }
        else
        {
            printf("%d and %d are on the right side of 0",a , b);
        }
    }
}
