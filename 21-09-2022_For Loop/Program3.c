

#include <stdio.h>

int main() {

	int rows;

	printf("Enter number of rows : ");
	scanf("%d",&rows);

	int ch1 = 97;
	int ch2 = 65;

	for(int i = 1;  i<rows;  i++){

		for(int j = 1;  j<=i;  j++){

			if(j % 2 != 0) {

				printf("%c 	",ch1);
			}

			else {

				printf("%c	",ch2);
			}

		}

	//	ch1 = ch1 - 1;

		printf("\n");

		ch1++;
		ch2++;
	}
}
