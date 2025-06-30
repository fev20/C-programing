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

// C 언어에서 변수를 재정의 하기 위해서는 다시 선언해서는 안됨
// 위에서 int a, b로 b라는 변수를 정의했기 때문에 b를 재정의 할때 다시 앞에 int를 작성하면 안됨
