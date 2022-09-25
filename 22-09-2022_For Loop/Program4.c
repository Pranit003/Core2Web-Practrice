

#include <stdio.h>

int main() {

	int rows;

	printf("Enter number of rows : ");
	scanf("%d",&rows);

	for(int i = 1;  i<=rows;  i++){

		int ch1 = 97;
		int num = 1;

		for(int k = 2;  k<=i;  k++){

			printf("\t");
		}

		for(int j = rows;  j>=i;  j--){

			if(j % 2 == 0){

				printf("%d\t",num);
				num++;
				ch1++;
			}
			else {

				printf("%c\t",ch1);
				ch1++;
			}
		}
		
		printf("\n");
	}
}
