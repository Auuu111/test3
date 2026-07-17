#include<stdio.h>
void print(long n)
{
    if (n==0)
    return;
    else
    {
        printf("%d",n%10);
        print(n/10);
        return;
    }
    

    
}

int main()
{
    long n;
    printf("input n:");
    scanf("%ld",&n);
    print(n);
}