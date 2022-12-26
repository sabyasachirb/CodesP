#include<stdio.h>
#include<math.h>
float square(float x)
{
    return x*x;
}
int absolute(int x)
{
    if(x>0)
        return x;
    else
        return (-1)*x;
}

float f(int x, int y)
{
    float ans = sqrt(absolute(x-3)+ square(y + 4));
    return ans;
}
int main()
{
    int a=12, b=7;
    float ans;
    ans = f(a,b);
    printf("%f", ans);
    return 0;
}