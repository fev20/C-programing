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

// 나눗셈 앞에 정수 자료형을 넣어주면 나머지 없이 깔끔한 몫을 구할 수 있음
// 변수값에 아무 데이터도 없을때 그 변수를 사용한 다른 변수를 만들면 이상한 결과가 나옴
//ex)
//int h, m, a;
//int x=(m+a)%60;
//int y=((m+a)-x)/60;
//scanf("%d %d\n%d", &h, &m, &a)
