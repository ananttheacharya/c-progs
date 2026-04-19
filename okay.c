#include <stdio.h>
void isprime(int *n){
	if(*n>1){
		int i;
		for(i = 2; i<*n; i++){
			if(*n%i == 0){
				printf("not prime");
				break;
			}
			else{
				printf("prime");
				break;
			}
		
			
		}
	}
}

int main(){
	int a;
	printf("enter ur number: "); scanf("%d", &a);
	isprime(&a);
}
