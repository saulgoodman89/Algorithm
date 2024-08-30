/*
    두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.
    첫째 줄에 테스트 케이스의 개수 T가 주어진다.
    각 테스트 케이스는 한 줄로 이루어져 있으며, 각 줄에 A와 B가 주어진다. (0 < A, B < 10)
*/

#include<stdio.h>
int main(void)  {
    int testCase = 0;
    int a,b=0;
    scanf("%d",&testCase);
    int arr[testCase];

    for(int i=0; i<testCase; i++) 
    {
        scanf("%d %d",&a,&b);  
        arr[i] = a+b;
    }
    
    for(int i=0; i<testCase; i++)
    {
        printf("%d \n",arr[i]);
    }
}