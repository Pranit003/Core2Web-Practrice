

#include <stdio.h>

int main() {

	int rows;

	printf("Enter number of rows : ");
	scanf("%d",&rows);

	for(int i = 0;  i<rows;  i++){

		for(int j = 0;  j<rows-(i+1);  j++){

			printf("\t");
		}

		for(int k = 0;  k<i+1;  k++){

			if(i%2 == 0){

				if(k % 2 == 0){

					printf("%c\t",(rows+96-i)+k);
				} else{

					printf("%c\t",(rows+64-i)+k);
				}

				
			}

			else {
				if(k%2==0){

					printf("%c\t",(rows+64-i)+k);
				}
				else{

					printf("%c\t",(rows+96-i)+k);
				}
			}

		}

		printf("\n");

		//ch1 = ch1 + 1;
	}
}
