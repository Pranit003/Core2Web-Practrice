
#include <stdio.h>

int main() {

	int rows;
	int num = 65;
	int num2 = 97;

	printf("Enter number of rows : ");
	scanf("%d",&rows);

	for(int i = 0;  i<rows;  i++){

		int num = 97;
		int num2 = 65;

		for(int j = 0;  j<i;  j++){

			if(i % 2 != 0) {

				printf("%c ",num);
				num++;
			}

			else {

				printf("%c ",num2);
				num2++;
			}
		}

		printf("\n");
	}
}
