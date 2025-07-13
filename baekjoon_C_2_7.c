int main(){
    int a, b, c;
    int d;
    scanf("%d %d %d", &a, &b, &c);
    if (a<b){
        d=a; a=b; b=d;
    }
    if (b<c){
        d=b; b=c; c=d;
    }
    if (a<b){
        d=a; a=b; b=d;
    }
    if (a==c){
        printf("%d", 10000+a*1000);
    }
    else if (a==b){
        printf("%d", 1000+a*100);
    }
    else if (c==b){
        printf("%d", 1000+c*100);
    }
    else{
        printf("%d",a*100);
    }
    return 0;
}

//a==b==c 이런거 안됨
