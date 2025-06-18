#include <stdio.h>
int main(){
    int x, step=0;
    scanf("%d", &x);
    int arr[] = {5, 4, 3, 2, 1};
    for(int i = 0; i < 5; i++){
        step = step + (x/arr[i]);
        x = x%arr[i];

    }
    printf("%d", step);
    return 0;
}