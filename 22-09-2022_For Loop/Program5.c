
#include <stdio.h>

int main() {

  int num;

 
  int n1 = 0, n2 = 1;

   int fab_no = n1 + n2;

   printf("Enter a number: ");
   scanf("%d", &num);

    printf("Fibonacci Series: %d, %d	", n1, n2);

    for (int i = 3;   i <= num;   i++) {
	    
            printf("%d	, ", fab_no);
            n1 = n2;
            n2 = fab_no;
            fab_no = n1 + n2;
  }
  
}

