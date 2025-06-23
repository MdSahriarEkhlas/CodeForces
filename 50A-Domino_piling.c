#include <stdio.h>
#define size 2

int main(){
    int m,n, num;
     scanf("%d %d", &m, &n);
    num = (m*n)/size;
    printf("%d", num);
    return 0;
}