#include <stdio.h>

int main() {

	int rows;

	printf("Enter number of rows : ");
	scanf("%d",&rows);

	int ch1 = 65 + rows - 1;
	int ch2 = 97 + rows + 2;

	for(int i = 0;  i<rows;  i++){

		for(int j = 0;  j<4;  j++){

			if(i % 2 ==  0) {
			
				printf("%c ",ch1);
				ch1--;
			}

			else {

				printf("%c ",ch2 );
				ch2++;
			}
		}

	     printf("\n");

            if(i % 2 != 0) {

		    ch1 = ch1 + 6;
	    }		    

	    else {

		    ch2 = ch2 - 2;
	    }
	}
}
