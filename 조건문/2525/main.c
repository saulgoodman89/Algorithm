#include<stdio.h>
/*
KOI 전자에서는 건강에 좋고 맛있는 훈제오리구이 요리를 간편하게 만드는 인공지능 오븐을 개발하려고 한다. 인공지능 오븐을 사용하는 방법은 적당한 양의 오리 훈제 재료를 인공지능 오븐에 넣으면 된다.
 그러면 인공지능 오븐은 오븐구이가 끝나는 시간을 분 단위로 자동적으로 계산한다.

또한, KOI 전자의 인공지능 오븐 앞면에는 사용자에게 훈제오리구이 요리가 끝나는 시각을 알려 주는 디지털 시계가 있다.

훈제오리구이를 시작하는 시각과 오븐구이를 하는 데 필요한 시간이 분단위로 주어졌을 때, 오븐구이가 끝나는 시각을 계산하는 프로그램을 작성하시오.

입력
첫째 줄에는 현재 시각이 나온다. 현재 시각은 시 A (0 ≤ A ≤ 23) 와 분 B (0 ≤ B ≤ 59)가 정수로 빈칸을 사이에 두고 순서대로 주어진다. 두 번째 줄에는 요리하는 데 필요한 시간 C (0 ≤ C ≤ 1,000)가 분 단위로 주어진다.

출력
첫째 줄에 종료되는 시각의 시와 분을 공백을 사이에 두고 출력한다. (단, 시는 0부터 23까지의 정수, 분은 0부터 59까지의 정수이다. 디지털 시계는 23시 59분에서 1분이 지나면 0시 0분이 된다.)
 
 현재시간을 0 0 포맷으로 표시
 0 이상 1000 이하의 조리시간을 입력 받는다. 

첫 째줄에 현재시간 입력받고
두 번째 줄에 조리시간을 입력 받는다. 

첫 째줄에 입력받은 시간을 초로 변경
두 번째 줄에 입력받은 시간을 초로 변경
두 시간을 더한 뒤 
시간 / 초로 환산한다. 


 
 */
int main() {
	int curHour , curMin , cookingTime , cookingTime= 0;    
    scanf("%d %d",&curHour,&curMin);
    scanf("%d",&cookingTime);

    if(0<=curHour<=23 && 0<=curMin<=59 && 0<=cookingTime<=1000) 
    {
        curHour = curHour * 3600;
        curMin = curMin * 60;
        cookingTime = cookingTime * 60;

        cookingTime = curHour + curMin + cookingTime;
        printf("cookingTime : %d \n",cookingTime);
        curHour = cookingTime / 3600;
        curMin = cookingTime / 3600 % 60;
        
        printf("%d %d",curHour,curMin);
    }    

}
