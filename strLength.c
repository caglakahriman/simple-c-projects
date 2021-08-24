//A program to find out given string's length, including whitespace.

#include <stdio.h>

int main(){
	char str[20];
	printf("Enter a string to find out it's length: ");
	scanf("%[^\n]s", str);
	int length=0;

	for(int i=0; str[i]!='\0'; i++){
		length++;
	}

	printf("The length of %s is %i\n", str, length);
	return 0;
}
