 
#include <stdio.h>

int main() {

	int num;

	printf("Enter a number : ");
	scanf("%d",&num);

	int count = 0;
	int flag = 0;

	for(int i = 1;  i<=num;  i++){

		if(num % i == 0){

			count++;
		}
	}

	if(count > 2){

		printf("%d is a composite number\n",num);
	}

	else {

		printf("%d is not a composite number\n",num);
	}
}
