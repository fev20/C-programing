#include <stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    for (int i=1; i<a+1; i++){
        int b,c;
        scanf("\n%d %d",&b, &c);
        printf("Case #%d: %d\n",i, b+c);
    }
    return 0;
}