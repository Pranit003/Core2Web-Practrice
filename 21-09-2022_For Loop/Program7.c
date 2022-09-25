

#include <stdio.h>

int main() {

	int num ;

	printf("Enter a number : ");
	scanf("%d",&num);

	int rem=0,sum=0,n;

	n = num;

	while(num > 0) {

		rem = num % 10;
		sum = sum + rem;
		num = num/10;
	}

	if(n % sum == 0){

		printf("%d is a harshad number : ",n);
	}

	else {

		printf("%d is not a harshad number : ",n);
	}
}
