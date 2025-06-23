#include <stdio.h>
int main (){
    int t, n, a,b, x;
    scanf("%d", &t);

    for(int i=1; i<=t; i++){
        scanf("%d", &n);
        a = n%10;
        b = n/10;
        x= a+b;
        printf("%d\n", x);
    }
    return 0;
}