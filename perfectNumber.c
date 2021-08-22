//A perfect number is a positive integer that is equal to the sum of its positive divisors, excluding the number itself.

#include <stdio.h>

int main(){
	
	int n;
	int sum=0;

	printf("Enter a number to check if it's 'perfect': ");
	scanf("%i", &n);
	
	for(int i=n-1; i>0; i--){
		if(n%i==0){
			sum+=i;
		}
	}

	if(sum==n){
		printf("%i is a perfect number!\n", n);
	}
	else{	
		printf("%i is not a perfect number.\n", n);
	}

	return 0;
}
