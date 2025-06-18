#include <stdio.h>
int main(){
    int t,  count =0;
    int arr[4];
    scanf("%d", &t);

    if(t>=1 && t <= 10){
    
    for(int i=1; i <= t; i++){
        for(int j=0; j<4; j++){
            scanf("%d", &arr[j]);
        }
        if(arr[0] > arr[2]){
            count++;
        }
        if(arr[2]> arr[3]){
            count++;
        }
        printf("%d\n", count);
        count = 0;
    }
}
    return 0;
}
