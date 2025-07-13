#include <stdio.h>

int main(){
    int h, m, a;
    scanf("%d %d\n%d", &h, &m, &a);
    int x=(m+a)%60;
    int y=((m+a)-x)/60;
    if (m+a>=60){
        if (h+y>=24){
            printf("%d %d", h+y-24,x);
        }
        else{
            printf("%d %d", h+y, x);
        }
    }
    else{
        printf("%d %d", h, m+a);
    }
    return 0;
}