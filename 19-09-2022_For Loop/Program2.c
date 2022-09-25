  

 /* 17 15 13
  * 11 9  7
  * 5  3  1
  */

#include <stdio.h>

int main() {

	int i,j,k,l;

	for(i=1;  i<=3;  i++){

		if(i == 1) {

			for(int j=17;  j>=13;  j=j-2){

				printf("%d ",j);
			}
		}

		else if(i == 2) {

			for(int k=11;  k>=7;  k=k-2){

				printf("%d ",k);
			}
		}

		else if(i == 3) {

			for(int l=5;  l>=1;  l=l-2) {

				printf("%d ",l);
			}
		}

		printf("\n");
	}
}
