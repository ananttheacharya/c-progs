#include <stdio.h>

void reverse(int *p, int *b){
	int i;
	int alpha;
	alpha = *b-1;
	int temp;
	for(i = 0; i<=alpha; i++){
		temp = *(p+i);
		*(p+i) = *(p+(alpha-i));
		*(p+(alpha-i)) = temp;
	}
	printf("\n");
	for(i = 0; i < *b; i++){
		printf("%d\t", *(p+(alpha-i)));
	}
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
	reverse(arr, &b);
}
