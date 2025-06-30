#include <stdio.h>

long long main(){
    long long a, b, c, d;
    scanf("%lld %lld %lld", &a, &b, &c);
    d= a+b+c;
    printf("%lld\n",d);
    return 0;
}

// C 언어에서 자료형 int에서 사용하는 것 보다 데이터가 큰 수는 자료형 long를 써야하고 받을때는 %ld로 받음
// 그것보다 데이터가 더 큰 수는 long long를 사용하고 받을때는 %lld로 받음
