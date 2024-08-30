/*
1에서부터 6까지의 눈을 가진 3개의 주사위를 던져서 다음과 같은 규칙에 따라 상금을 받는 게임이 있다.

같은 눈이 3개가 나오면 10,000원+(같은 눈)×1,000원의 상금을 받게 된다.
같은 눈이 2개만 나오는 경우에는 1,000원+(같은 눈)×100원의 상금을 받게 된다.
모두 다른 눈이 나오는 경우에는 (그 중 가장 큰 눈)×100원의 상금을 받게 된다.
예를 들어, 3개의 눈 3, 3, 6이 주어지면 상금은 1,000+3×100으로 계산되어 1,300원을 받게 된다.
또 3개의 눈이 2, 2, 2로 주어지면 10,000+2×1,000 으로 계산되어 12,000원을 받게 된다. 3개의 눈이 6, 2, 5로 주어지면 그중 가장 큰 값이 6이므로 6×100으로 계산되어 600원을 상금으로 받게 된다.

3개 주사위의 나온 눈이 주어질 때, 상금을 계산하는 프로그램을 작성 하시오.
*/

#include <stdio.h>

int main(void) {
    int firstDice , secDice , thirdDice = 0;
    scanf("%d %d %d",&firstDice,&secDice , &thirdDice);
    int prizeMoney = 0;
    // 3개의 주사위 값을 입력 받는다.

    if(0<firstDice<=6 && 0<secDice<=6 && 0<thirdDice<=6 ) 
    {
            // 입력 받은 주사위 값이 3개가 같을 때 
        if(firstDice == secDice && secDice == thirdDice) {
            prizeMoney = 10000+firstDice*1000;   
            //주사위 값이 모두 다를 때             
        }else if(firstDice!=secDice && secDice!=thirdDice && firstDice!=thirdDice){
            // 첫 번째 값이 제일 클 때
            if(firstDice>secDice && firstDice>thirdDice) {
                prizeMoney = firstDice * 100;
            }else if(secDice>firstDice && secDice>thirdDice) {
                prizeMoney = secDice * 100;
            }else {
                prizeMoney = thirdDice * 100;
            }
        }else {
            if(firstDice == secDice || firstDice == thirdDice)
                prizeMoney = 1000+firstDice*100;
            else 
                if(secDice == thirdDice)
                    prizeMoney = 1000+secDice*100;
        }

    }else {
        printf("err wrong num");
    }
    
    printf("%d \n",prizeMoney);

    return 0;
}