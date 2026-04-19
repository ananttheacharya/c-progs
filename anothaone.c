#include <stdio.h>
void check(int *n){
	if(*n%2==0){
		printf("even");
}
else{
	printf("odd");
}
	
	
}
int main(){
	int a;
	printf("enter a number: "); scanf("%d", &a);
	check(&a);
	
}
