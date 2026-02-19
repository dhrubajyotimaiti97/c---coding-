// Online C compiler to run C program online
#include <stdio.h>

int main()
{
    int a[3] = {10, 12, 15};
    int i, j;
    
    printf("{ }\n");
    
    for( i = 0; i < 3; i++)
    {
        printf(" { %d } \n",a[i]);
        
        for(j = i + 1; j < 3; j++)
        {
            printf("{ %d, %d } \n", a[i],a[j]);
        }
    }

     printf("{ 10 , 12 , 15 }\n");

    return 0;
}
