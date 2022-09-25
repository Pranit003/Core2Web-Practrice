
#include <stdio.h>

int main() {

	int rows;

	printf("Enter number of rows : ");
	scanf("%d",&rows);

	int num = 0;

	for(int i = 1;  i<rows;  i++){

		for( int j = 1;  j<=i;  j++){

			num++;
			printf("%d	",num);
		}

		printf("\n");

		num = num - 1;
	}
}
