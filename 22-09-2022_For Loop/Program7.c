#include <stdio.h>

int main() {

	int start_no;
	int end_no;

	printf("Enter a start number : ");
	scanf("%d",&start_no);

	printf("Enter a end number : ");
	scanf("%d",&end_no);

	for(int i=start_no;  i<=end_no;  i++){

		printf("%d	",i);
	}
}

