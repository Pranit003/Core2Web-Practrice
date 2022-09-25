

#include <stdio.h>

int main() {

	int rows;

	printf("Enter number of rows : ");
	scanf("%d",&rows);

	for(int i = 1;  i<=rows;  i++){

		int num = rows * i;

		for(int j = 1;  j<=rows;  j++){

	        	printf("%d\t",num);
		        
			num = num + rows + i;
			
		}

		printf("\n");
	}


}
