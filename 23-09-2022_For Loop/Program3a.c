#include<stdio.h>
	
void main(){
	int n;
	printf("Enter the rows\n");
	scanf("%d",&n);
	
	for(int i=1;i<=n;i++){
		int num=n-i;char ch=100;
		for(int j=1;j<=n;j++){
			if(i>j){
				printf("  ");
			}else{
				if(j%2!=0){
				printf("%d ",num);
				num--;
				}else{
					printf("%c ",ch);
					ch--;
				}
			
			}
		
		}
		printf("\n");
	
	}

}
