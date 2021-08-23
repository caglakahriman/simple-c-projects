//A program that reverts the number.

#include <stdio.h>

int main(){
	
	int n;
	printf("Enter a number to revert it: ");
	scanf("%i", &n);
	int tmp=n;
	int digit;
	int length=0;

	while(tmp>0){
		digit=tmp%10;
		tmp/=10;
		length++;		
	}

	int reversed[length];
	int index=0;

	while(n>0 && index<length){
		digit=n%10;
		n/=10;
		reversed[index]=digit;
		index++;
	}

	for(int i=0; i<length; i++){
		printf("%d", reversed[i]);
	}

	printf("\n");
	return 0;
}
