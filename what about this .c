#include <stdio.h>

int sum(int a, int b){
	int sum = a + b;
	return sum;
}

int factorial(int b){
	int i, fact;
	fact = 0;
	for(i=0; i<b; i++){
		fact = fact*i;
	}
	return fact;
}
void prime(int a){
	int i;
	for(i=2; i<a; i++){
		if(a%i == 0){
			printf("not prime");
			break;
		}
		else{
			printf("prime");
			break;
		}
	}

}

int main(){
	int a;
	printf("SELECT WHATDOUWANNADO"); scanf("%d", &a);
	switch(a)
{
    case 1: {
        int b = 0, c = 0 , suma = 0;

        printf("enter first value\n"); 
        scanf("%d", &b);

        printf("\nenter second value\n"); 
        scanf("%d", &c);

        suma = sum(b,c);
        printf("sum is equal to\t%d", suma);

        break;
    }
        
    case 2: {
        int d = 0, fact = 0;

        printf("enter value\n"); 
        scanf("%d", &d);

        fact = factorial(d);
        printf("%d", fact);   // also fixed this

        break;
    }
    
    case 3: {
        int e = 0;

        printf("enter value\n"); 
        scanf("%d", &e);

        prime(e);

        break;
    }
}
	
}
