#include <stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    for (int i=0; i<a; i++){
        int b,c;
        scanf("\n%d %d",&b, &c);
        printf("%d\n",b+c);
    }
    return 0;
}