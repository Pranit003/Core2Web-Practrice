#include <stdio.h>

int main() {

	int rows;

	printf("Enter number of rows : ");
	scanf("%d",&rows);

	int num = 1;

	for(int i = 1;  i < rows;  i++){

		for(int j = 1; j < rows;  j++){

			printf("%d	",num);
			num = num + 3;
		}

		printf("\n");

		num = num - 6;

		
	}
}
