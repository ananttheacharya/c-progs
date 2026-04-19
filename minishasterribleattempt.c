#include <stdio.h>	
 void increment(int *n){
	*n = *n + 10;

}

int main(){
	int a;
	printf("enter the number"); scanf("%d", &a);
	increment(&a);
	printf("\n%d", a);
	
}
