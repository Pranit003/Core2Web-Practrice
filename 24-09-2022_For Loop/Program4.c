

#include <stdio.h>

int main() {

	int rows;

	printf("Enter number of rows : ");
	scanf("%d",&rows);
        
	int n = rows/2;
	
	for(int i = 1;  i<=n+1;  i++){

		int ch1 = 1;

		for(int j = 1;  j<=i;  j++){

			printf("%d\t",ch1);
			ch1++;
		}

		printf("\n");
	}

	for(int i = 1;  i<=n;  i++){

		int ch1 = 1;

		for(int j = 3;  j>=i;  j--){

			printf("%d\t",ch1);
			ch1++;
		}

		printf("\n");
	}
}
