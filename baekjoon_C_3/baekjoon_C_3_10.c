#include <stdio.h>

int main(){
    int a;
    scanf("%d", &a);
    for (int i=0; i<a; i++){
        for (int j=0; j<a-i-1; j++){
            printf(" ");
        }
        for (int k=0; k<i+1; k++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

// 백준에서 출력 형식이 잘못되었다는 것은 답은 맞으나 공백이나 줄바꿈이 틀렸다는 것을 뜻함
