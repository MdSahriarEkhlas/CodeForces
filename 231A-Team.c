#include <stdio.h>
int main(){
    int n, a, sum= 0, sol=0;
    scanf("%d", &n);
    for(int i = 1; i <=n; i++){
        for(int j = 1; j <=3; j++){
            scanf("%d", &a );
            sum = sum + a;
        }
        if(sum >= 2){
            sol++;
        }
        sum = 0;

    }
    printf("%d", sol);
    return 0;
}