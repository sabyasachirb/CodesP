// #include <stdio.h>
// int main()
// {
//     int val=printf("00\n");
//     printf("%d",val);
//     return 0;
// }

#include <stdio.h>
void main()
{
    int i=0;
    for (i=0; i<8; i++)
    {
        if (i%4)
        {
            printf("Phitron\n");
        }
    }
}