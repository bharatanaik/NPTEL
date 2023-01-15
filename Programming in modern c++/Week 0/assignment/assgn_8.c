#include<stdio.h>


int main(){
    int arr[5][10][20];
    int res;
    arr[2][6][10] = 100;

    res = ((**(*arr+2)+6)+10);
    printf("\n%d", res);
    
    res = (**(*(arr+2)+6)+10);
    printf("\n%d", res);

    res = (*(**(arr+2)+6)+10);
    printf("\n%d", res);

    res = *(*(*(arr+2)+6)+10);
    printf("\n%d", res);


    return 0;
}