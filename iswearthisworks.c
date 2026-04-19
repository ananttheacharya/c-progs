#include <stdio.h>

void process(int *p, int *n){
	int i;
	for(i=0; i<*n; i++){
		if(*(p+i)%2==0){
			*(p+i) = *(p+i)+2;
		}
		else{
			*(p+i) = *(p+i)+4;
		}
	}
	for(i=0; i<*n; i++){
		printf("\n%d\n", *(p+i));
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
printf("\n");
	for(i=0; i<b; i++){
	printf("%d\t", arr[i]);

}
	process(arr, &b);
}
