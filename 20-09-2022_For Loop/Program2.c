#include <stdio.h>

int main() {

	int rows;
	int n = 9;

	printf("Enter number of rows : ");
	scanf("%d",&rows);

	for(int i = 0; i<=rows;  i++){

		for(int j = 0;  j<3;  j++){

			printf("%d ",rows * n);
			n--;
		}

		printf("\n");
	}
}
