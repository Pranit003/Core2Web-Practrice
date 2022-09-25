#include <stdio.h>

int main() {

	int rows;

	printf("Enter number of rows : ");
	scanf("%d",&rows);

	int num = 1;

	for(int i = 0;  i<rows;  i++){

		
		for(int j = 0;  j<i;  j++){

			printf("%d ",num);

			num = num + 2;
		}

		printf("\n");
	}

}
