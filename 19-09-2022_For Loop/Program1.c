/*
5 4 3 2 1
D C B A
3 2 1
B A
1 */

#include <stdio.h>

int main() {

	int rows,i,j;
	int num = 68;
	int num2 = 66;

	printf("Enter rows : ");
	scanf("%d",&rows);

	for(i=rows;  i>0;  i--) {

		for(j=i;  j>0;  j--) {

			if(i == 4) {

				printf("%c ",num);
				num--;
			}

			else if(i == 2) {

					printf("%c ",num2);
					num2--;
			}


			else {

				printf("%d ",j);
			}
		}

		printf("\n");
	}
}
