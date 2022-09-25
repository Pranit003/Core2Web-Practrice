/*
4 4 4 4
C C C
2 2
A

*/

#include <stdio.h>

int main() {

	int row;

	printf("Enter a row : ");
	scanf("%d",&row);

	for(int i=0;  i<row;  i++){

		for(int j=row;  j>0;  j--){

			int n = row - i;

			if(i % 2 == 0) {

				printf("%d\t",n);
				n--;
			}else {

				printf("%c\t",n);
				n--;
			}
		}

		printf("\n");


	}
}
