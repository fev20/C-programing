#include <stdio.h>

int main(){
    int X,N;
    int d=0;
    scanf("%d\n%d",&X,&N);
    for (int i=0; i<N; i++){
        int a, b;
        scanf("\n%d %d",&a, &b);
        int c=a*b;
        d=d+c;
    }
    if (X==d){
        printf("Yes");
    }
    if (X!=d){
        printf("No");
    }
    return 0;
}