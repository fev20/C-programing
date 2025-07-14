#include <stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    for (int i=1; i<10; i++){
        printf("%d * %d = %d\n",a, i, a*i);
    } 
    return 0;
}

//c언어에서 for 문을 사용할때는 for i in range가 아닌 for (int i=a; i<b; i++) 이런식으로 작성하여야함
