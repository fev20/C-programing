#include <stdio.h>

int main(){
    int a;
    int b=0;
    scanf("%d",&a);
    for (int i=1; i<a+1; i++){
        b=b+i;
    }
    printf("%d",b);
    return 0;
}