#include<stdio.h>


int main(int argc, char const *argv[])
{
    int array[] = {10, 20, 30, 40, 50};
    int *ip, i;
    ip = array+4;
    for(i=0; i<5; i++)
        printf("%d\n", ip[-i]);
    return 0;
}
