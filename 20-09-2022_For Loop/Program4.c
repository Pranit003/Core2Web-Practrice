#include <stdio.h>

int main() {

	int rows;

	printf("Enter number of rows : ");
	scanf("%d",&rows);

	int ch1 = 65 + rows - 1;
	int ch2 = 97 + rows - 2;

	for(int i = rows; i>=1; i--){

		for(int j = i;  j>=1;  j--){
		        
		        if(i % 2 == 0) {

				printf("%c ",ch1);
				ch1--;
			}	
			else {

				printf("%c ",ch2);
				ch2--;
			}
			
		}

		printf("\n");

		if( i % 2 ==0) {

			ch1 = ch1 + 2;
		}

		else {

			ch2 = ch2 + 1;
		}
	}
}
