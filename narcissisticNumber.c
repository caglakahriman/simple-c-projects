//In number theory, a narcissistic number in a given number base b is a number that is the sum of its own digits each raised to the power of the number of digits.

#include <stdio.h>
#include <math.h>

int main(){
	
	int n;
	printf("Enter a number to check if it's narcissistic: ");
	scanf("%i", &n);
	int sum=0;
	int tmp=n;
	int digit;
	int length=0;

	for(int i=1; tmp>0; i++){
		tmp/=10;
		length=i;
	}
	tmp=n;
	while(tmp>0){
		digit=tmp%10;
		sum+=pow(digit,length);	
		tmp/=10;	
	}
	
	if(sum==n){
		printf("%i is a narcissistic number!\n", n);
	}
	else{
		printf("%i is not a narcissistic number.\n", n);
	}

	return 0;
}
