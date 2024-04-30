#include<stdio.h>

/*
   (세 자리 수) × (세 자리 수)는 다음과 같은 과정을 통하여 이루어진다.



(1)과 (2)위치에 들어갈 세 자리 자연수가 주어질 때 (3), (4), (5), (6)위치에 들어갈 값을 구하는 프로그램을 작성하시오.

입력
첫째 줄에 (1)의 위치에 들어갈 세 자리 자연수가, 둘째 줄에 (2)의 위치에 들어갈 세자리 자연수가 주어진다.

출력
첫째 줄부터 넷째 줄까지 차례대로 (3), (4), (5), (6)에 들어갈 값을 출력한다.

입력 
472
385

출력
2360
3776
1416
181720


첫 번째 값 입력 받는다. 
두 번째 값 입력 받는다.

첫,두번째 값이 3자리 이상인지 체크한다. 
만약 , 입력 받은 값들이 3자리 이면 
첫 번째 값과 두 번째 값의 마지막 숫자부터 역순으로 곱연산 한다. 


   */

int main() {

    int hundred = 0;
    int ten = 0;
    int ones = 0;

    int multiple_value;
    int multiple_value_;
    scanf("%d",&multiple_value);
    scanf("%d",&multiple_value_);

    if(multiple_value < 1000 && multiple_value_ < 1000) {
	hundred = multiple_value_ / 100;
    	ten = multiple_value_ % 100 / 10;
    	ones = (multiple_value_ % 100) % 10;

//    	printf("hundred : %d / ten : %d / one : %d \n",hundred , ten , ones);
    	printf("%d \n", multiple_value*ones);  
   	printf("%d \n", multiple_value*ten);
	printf("%d \n", multiple_value*hundred);
	printf("%d \n", multiple_value*multiple_value_);
    }else {
	printf("check not valid number \n");
    }
}
