#include <stdio.h>

int main(){
    int a, arr[100], b, count=0;
    scanf("%d", &a);
    for (int i=0; i<a; i++){
        scanf("%d", &arr[i]);
    }
    for (int i=0; i<a; i++){
        scanf("%d", &b);
        if (b==arr[i]){
            count++;
        }
    }
    printf("%d", count);
    return 0;
}
