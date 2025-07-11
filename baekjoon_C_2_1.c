#include <stdio.h>

int main(){
    int a,b;
    scanf("%d %d", &a, &b);
    if (a>b){
        printf(">");
    }
    else if (a<b){
        printf("<");
    }
    else{
        printf("==");
    }
}

//if와 else뒤에는 ; 붙이지 말 것
// 조건문에 {}는 붙여도 되고 안붙여도 되지만 붙이면 보기 편함
//{}안에 글자들은 ; 붙여서 처리할 것
