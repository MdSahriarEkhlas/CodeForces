#include <stdio.h>
int main(){
    int n,k, last_digit;
     scanf("%d %d", &n, &k);

     for(int i =1; i<= k; i++){
        last_digit = n%10;
        if(last_digit != 0){
            n--;
        }else{
            n = n/10;
        }
    }
    printf("%d", n);
     return 0;

}