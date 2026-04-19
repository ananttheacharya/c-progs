#include <stdio.h>

int largest(int *n, int *b){
	int i;
	int max = -9999;
	for(i=0; i<*b; i++){
		if(*(n+i)>max){
			max = *(n+i);
			}
		}
	return max;
}

int main(){
	int b;
	printf("enter the size of your array: "); scanf("%d", &b);
	int arr[b];
	printf("enter the digits: \n");
	int i;
	for(i=0; i<b; i++){
	scanf("%d", &arr[i]);
}
	for(i=0; i<b; i++){
	printf("%d\t", arr[i]);
}
	int s;
	s = largest(arr, &b);
	printf("\nMaximum Number is\n%d", s);
}
