
#include <stdio.h>

int main() {

	int rows;

	printf("Enter number of rows : ");
	scanf("%d",&rows);

	for(int i = 0;  i<rows;  i++){

		int ch1 = 1;

		for(int j = 0;  j<rows-i;  j++){

			printf(" ");
		}

		for(int k = 0;  k<(2*i+1);  k++){

			if(k % 2 == 0) {

				printf("%d ",ch1++);
			}
			else {

				printf(" ");
			}
		}

		printf("\n");
	}
}
