#include <stdio.h>

int main() {

	int start_no;
	int end_no;

	printf("Enter a number : ");
	scanf("%d",&start_no);

	printf("Enter a end number : ");
	scanf("%d",&end_no);

	int count = 0, result = 0;

	for(int i = start_no;  i<=end_no;  i++){

		for(int j = 1;  j<=start_no;  j++) {

			if(i % j == 0){

				count++;
			}
		}
	       
	      if(count > 2) {

		      result = i;
		      break;
	      }	      
	}

	printf(" %d is first composite number btw 20 to 30 : ",result);


}
