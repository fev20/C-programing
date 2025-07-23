#include <stdio.h>

int main(){
    int a, arr[100], b, count=0;
    scanf("%d", &a);
    for (int i=0; i<a; i++){
        scanf("%d", &arr[i]);
    }
    for (int i=0; i<a; i++){
        scanf("%d", &b);
        if (b==arr[i]){
            count++;
        }
    }
    printf("%d", count);
    return 0;
}

//C언어에서 scan을 할때에는 굳이 \n을 사용하지 않아도 된다. \n은 print할 때 보통 사용된다.
//C언어에서 arr[i]라는 것을 사용하면 내용물을 저장하고 출력할 수 있다. 단 사용하기 전에 int arr[숫자]를 사용해서 arr[i]를 정의해줘야 한다.
