

#include <stdio.h>

int main() {

	int rows;

	printf("Enter number of rows : ");
	scanf("%d",&rows);

	int ch1 = 97;

	int n = rows/2;

	for(int i = 1;  i<=n+1;  i++){

		for(int j = 1;  j<=i;  j++){

			printf("%c\t",ch1);
			ch1++;
		}

		printf("\n");
	}

	int ch2 = 103;

	for(int i = 1;  i<=n;  i++){

		for(int j = 2;  j>=i;  j--){

			printf("%c\t",ch2);
			ch2++;
		}

		printf("\n");
	}
}
