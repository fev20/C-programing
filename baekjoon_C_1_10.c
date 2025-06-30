#include <stdio.h>

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    int t=b;
    int c=b/100;
    b=b-c*100;
    int d=b/10;
    b=b-d*10;
    int e=b;
    printf("%d\n",a*e);
    printf("%d\n",a*d);
    printf("%d\n",a*c);
    printf("%d",a*t);
    return 0;
}