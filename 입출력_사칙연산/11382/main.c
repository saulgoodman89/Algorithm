#include<stdio.h>

int main() {
	long long a , b , c = 0;
	long long value = 1000000000000LL;

	scanf("%lld",&a);
	scanf("%lld",&b);
	scanf("%lld",&c);
	
	if(1<=a<=value && 1<=b<=value && 1<=b<=value) {
		printf("%lld",a+b+c);
	}else {
		printf("Check input number");
	}
}
