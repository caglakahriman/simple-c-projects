#include <stdio.h>

int main(){

	int x;
	int sum=0;
	int digit;

	printf("Enter a number: ");
	scanf("%i", &x);
	int tmp=x;
	while(tmp>0){
		digit=tmp%10;
		tmp/=10;
		int factor=1;
		for(int i=1; i<=digit; i++){
			factor*=i;	
		}
		sum+=factor;
	}

	if(sum==x){
		printf("%i is a strong number!\n", x);
	}
	else{
		printf("%i is not a strong number.\n", x);
	}
	
	return 0;
}
