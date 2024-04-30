#include<stdio.h>

/*
    1330번 두 수 비교하기 
*/
int main() {
    int a,b = 0;
    scanf("%d",&a);
    scanf("%d",&b);

    if(a == b) {
        printf("==");
    }else if(a>b) {
        printf(">");
    }else if(a<b) {
        printf("<");
    }
}