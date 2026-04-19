#include <stdio.h>
#include <string.h>
int sum(int *p, int *n){
	int sum;
	sum = 0;
	int i;
	for(i = 0; i < *n; i++){
		sum += *(p+i); 
	}
	return sum;
}

int main(){
int b;
printf("enter the size of your array: "); scanf("%d", &b);
int arr[b];
printf("enter the digits");
int i;
for(i=0; i<b; i++){
	scanf("%d", &arr[i]);
}
for(i=0; i<b; i++){
	printf("%d\t", arr[i]);
}
int s;
s = sum(arr, &b);
printf("\n\n------the sum is-------\n\n%d", s);


}
