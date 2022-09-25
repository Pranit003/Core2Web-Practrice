

#include <stdio.h>

int main() {

	int num;

	printf("Enter a number : ");
	scanf("%d",&num);

	int count = 0;

	int rem = 0;

	while(num > 0){

		rem = num % 10;
		count++;
		num = num / 10;
	}

	printf("\n Number of count is : %d",count);
}
