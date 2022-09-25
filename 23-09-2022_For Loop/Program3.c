

#include <stdio.h>

int main() {

	int rows;

	printf("Enter number of rows : ");
	scanf("%d",&rows);

	for(int i = 1;  i<=rows;  i++){

		int num = 3;

		for(int j = 1;  j<=i-1;  j++){

			printf("\t");
		}

		for(int k = rows;  k>=i;  k--){

			if((i + k)%2 == 0){

				printf("%d\t",num);
				num--;
			}
		}


		printf("\n");
	}

}
