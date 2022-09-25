

#include <stdio.h>

int main() {

	int start;
	int end;
	int sum = 0;

	printf("Enter a start number : ");
	scanf("%d",&start);

	printf("Enter a end number : ");
	scanf("%d",&end);

	for(int i = start;  i<=end;  i++){

		int sum = 0;

	    for(int j = 1;  j<=i/2;  j++){

		    if(i % j == 0){

			    sum = sum + j;
		    }

	    }

	    if(sum == i){

		    printf(" %d\n",i);
	    }
	}

}
