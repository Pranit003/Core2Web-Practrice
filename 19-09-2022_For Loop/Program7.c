 
/*
 1 
 2 4 
 3 6 9
 4 8 12 16 */

#include <stdio.h>

int main() {

	int i,j,num;

	for(i=1;  i<=4;  i++) {

		num++;
		for(j=1;  j<=i;  j++){

			if(j == 1 ) {

			printf(" %d ",num);

			}

			else if(j == 2 ) {

				printf(" %d ",num * 2);
			}

			else if(j == 3 ) {

				printf( " %d ",num * 3);
			}

			else if(j == 4 ) {

				printf( " %d ",num * 4) ;
			}
		}

		printf("\n");
	}
}
