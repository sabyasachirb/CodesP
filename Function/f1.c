#include<stdio.h>

int max_of_three(int x, int y, int z)
{
    if(x>y && x>z)
        return x;
    else if(y>x && y>z)
        return y;
    else
        return z;
}
int main()
{
    int a,b,c, max;
    scanf("%d %d %d", &a, &b, &c);
    max = max_of_three(a,b,c);
    printf("%d", max);
    return 0;
}

