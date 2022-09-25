/* 

  a 
  b a 
  c b a
  d c b a */

  #include <stdio.h>

  int main() {

	  char ch = 'a';

	  for(int i=1;  i<=4;  i++) {

		  for(int j=1;  j<=i;  j++){

			  printf("%c  ",ch);
			  ch = ch - 1;
		  }

		  printf("\n");
		  ch = ch + 1 + i;
	  }
  }
