

#include <stdio.h>

int  main(){

	int rows;

	printf("Enter number of rows : ");
	scanf("%d",&rows);

	for(int i = 0;  i<rows;  i++){

		int ch = 65;

		for(int j = 0;  j<=i-0;  j++){

			printf("\t");
		}

		for(int k = rows;  k>i;  k--){

			printf("%c\t",ch + i);
			ch++;
		}

		printf("\n");

		//ch = ch + 1;
	}
}
