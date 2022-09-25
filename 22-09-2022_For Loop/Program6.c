

#include <stdio.h>

int main() {

	int rows;


	printf("Enter number of rows : ");
	scanf("%d",&rows);

	int num;

	printf("Enter a number : ");
	scanf("%d",&num);

	int rem =0;
	int sum = 0;
	int n = num;


			while(num > 0){

				rem = num % 10;
				sum = sum + rem;
				num = num/10;
			
			if(n % sum == 0){

				printf("%d\t",n);
	}
}

}
