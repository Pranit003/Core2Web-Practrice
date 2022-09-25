
#include <stdio.h>


int main() {

	int rows;

	printf("Enter number of rows : ");
	scanf("%d",&rows);

	for(int i = 1;  i<=rows;  i++){

		int num = rows;

		for(int j = 1;  j<=i;  j++){

			if(j % 2 != 0){

				printf("%d\t",num);
				num--;
			}

			else {

				printf("%c\t",102 - j);
			}
		}

		printf("\n");

		
	}
}
