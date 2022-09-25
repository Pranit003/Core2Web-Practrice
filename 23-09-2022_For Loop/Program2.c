

#include <stdio.h>

int main() {

	int rows;

	printf("Enter number of rows : ");
	scanf("%d",&rows);

	int sum = 0, num1 = 0, num2 = 1, next_no;

	for(int i = 1;  i<=rows;  i++){

		for(int j = rows;  j>=i;  j--){

			next_no = num1;
			sum = sum + next_no;
                        num1++;
			printf("%d\t",sum);
		}

		printf("\n");
	//	num1++;
	}

}
