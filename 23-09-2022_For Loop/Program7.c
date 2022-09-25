
#include <stdio.h>

int main() {

	int num;

	printf("Enter a number : ");
	scanf("%d",&num);

	int sum = 0;

	for(int i = 1;  i<=num/2;   i++){

		if(num % i == 0){

			sum = sum + i;
		}
	}

	if(sum == num) {

		printf("Given number is perfect number : %d",num);
	}

	else {

		printf("Given number is not perfect number : %d",num);
	}


}
