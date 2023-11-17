#include<stdio.h>
#include<string.h>

int main() {
	char id[50];
	scanf("%s",&id);

	int len = strlen(id);

	if(len <= 50) {
		strcat(id,"??!");
		printf("%s",id);	
	}



}
