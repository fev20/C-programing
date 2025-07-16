#include <stdio.h>

int main(){
    int a, b;
    while(scanf("%d %d", &a, &b)==2){
        printf("%d\n", a+b);
    }
    return 0;
}

// while 문에서 int형 변수에 null이라는 개념은 없음
// while 문의 논리식 부분에 scanf속 변수의 개수가 참인 개수를 넣어주면 됨
// ex) while(scanf("%d",a)==1) or while(scanf("%d %d %d %d", &a, &b, &c, &d)==4)
