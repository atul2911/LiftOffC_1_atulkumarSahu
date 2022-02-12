#include<stdio.h>
int main(){
	int x;
	printf("Enter the value of a\n");
	scanf("%d",&x);
	switch(x%2){
		case 0:
			printf("%d is even number\n",x);
			break;
		case 1:
			printf("%d is odd number\n",x);
			break;	
	}
	return 0;
}

