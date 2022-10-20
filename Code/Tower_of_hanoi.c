#include<stdio.h>
#include<conio.h>
int tower(int n)
{
    if(n>0)
    {
        return 2*tower(n-1)+1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n;
    printf("Enter Number of Disk:");
    scanf("%d", &n);
    printf("Total Moves: %d\n\n", tower(n));
}
