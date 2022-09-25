
#include <stdio.h>

int main() {

	int rows;
	int num =2;

	printf("Enter number of rows : ");
	scanf("%d",&rows);

	for(int i = 1;  i<=rows;  i++){

		for(int j = 1;  j<=rows; ){

			int count = 0;

			for(int k = 1;  k<=num;  k++){

				if(num % k == 0)
					count++;
				        
			}

			if(count == 2){

				printf("%d 	",num);
				j++;
			
			}
			num++;
		}
		printf("\n");
	}
}
