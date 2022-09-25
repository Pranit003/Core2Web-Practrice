

#include <stdio.h>

int main() {

	int num;
	int rem ,rev = 0;

	printf("Enter a number : ");
	scanf("%d",&num);

	while(num > 0){

		rem = num % 10;
		rev = ( rev * 10) + rem;
		num = num/10;
	}

	printf("Reverse number is : %d\n",rev);
}
