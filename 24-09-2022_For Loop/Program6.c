

#include <stdio.h>

int main() {

	int num;
	int sum = 0, rem =0;

	printf("Enter a number : ");
	scanf("%d",&num);

	while(num > 0){

		rem = num % 10;
		sum = sum + rem;
		num = num/10;
	}

	printf("Sum is %d\n",sum);
}
