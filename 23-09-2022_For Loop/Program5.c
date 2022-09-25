/* 
  a
  a b
  a b c
  a b c d
  a b c
  a b
  a
*/

#include <stdio.h>

int main() {

	int rows;

	printf("Enter number of rows : ");
	scanf("%d",&rows);

	for(int i=1;  i<=rows;  i++){

		int ch = 'a';

		for(int j = 1;  j<=i;  j++){

			printf("%c\t",ch);
			ch++;
		}

		printf("\n");
	

	//int i = 1;
	//
        }

	for(int k = 1;  k <= rows - 1;  k++){

		int ch = 'a';

		for(int l = rows-1;  l>=k;  l--){

			printf("%c\t",ch);
			ch++;
		}

		printf("\n");

	
	}
   }

