

#include <stdio.h>

int main() {

	int start,end;

	printf("Enter a start number : ");
	scanf("%d",&start);

	printf("Enter a end number : ");
	scanf("%d",&end);

	for(int i=start;  i<=end;  i++){

		int rem,rev=0,temp=i;

		while(temp){

			rem = temp % 10;
			temp = temp/10;
			rev = (rev * 10) + rem;
		}

		if(i == rev) {

			printf("%d\t",i);
		}
	}
}
