

#include <stdio.h>

int main() {

	int rows;

	printf("Enter number of rows : ");
	scanf("%d",&rows);

	for(int i = 1;  i<=rows;  i++){

		int ch1 = 97;
		int num = rows - i;

		for(int j = rows;  j >= i;  j--){

			if( (i + j) % 2 != 0 ) {

				printf("%d\t",num);
				num--;
			}

			else {

				printf("%c\t",ch1 + i - 1);
			}

			ch1++;
			

		}

		printf("\n");

	
	}
}
