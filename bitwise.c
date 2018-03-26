#include <stdio.h>

int main() 
{
    int i = 65;
    int k = 120;
    printf(" value of before swapping", i, k);
    
    k = i ^ k;
    i = i ^ k;
    printf("value of after swapping", i, k);

    return 0;
}
