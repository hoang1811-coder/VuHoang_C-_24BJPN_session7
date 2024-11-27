#include<stdio.h>
int main(){
	int array[]={1,3,5,7,9};
	// tinh do dai cua mang
	int n = sizeof(array) / sizeof(array[0]);
	// in ra cac phan tu cua mang
	for(int i = 0; i<n ; i++){
		printf("Phan tu %d : %d\n ",i,array[i]);
	}
	// in ra do dai cua mang
	printf("Do dai cua amng la : %d",n);
	return 0;
}
