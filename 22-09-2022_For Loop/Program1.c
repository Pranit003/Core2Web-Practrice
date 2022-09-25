

#include <stdio.h>

int main() {

	int rows;

	printf("Enter number of rows : ");
	scanf("%d",&rows);

	int num;

	for(int i = 1;  i <= rows;  i++){

		num = rows ;

		for(int j = 1;  j <= rows;  j++){

			printf("%d\t",i  * num);
			num++;

		}

		printf("\n");
	}
	
	
}
