#include <stdio.h>
int square(int a){
	int s;
	s = a*a;
	return s;
}

int main(){
	int d;
	printf("enter da number"); scanf("%d", &d);
	int s;
	s = square(d);
	printf("%d", &s);
}
