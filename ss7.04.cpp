#include<stdio.h>
int main(){
	int n;
	// yeu cau nguoi dung nhap do dai cua mang
	printf("Hay nhap do dai cua mang : ");
	scanf("%d", &n);
	
	int arr[n];
	// yeu cau nguoi dung nhap cac phan tu cua mang
	printf("Hay nhap cac phan tu cua mang:\n");
	for(int i=0;i<n;i++){
		printf("phan tu %d : ",i+1);
		scanf("%d", &arr[i]);
	}
	// in ra mang
	    printf("\nCac phan tu trong mang la:\n");
    for (int i = 0; i < n; i++) {
        printf("Phan tu %d: %d\n", i + 1, arr[i]);
}
	return 0;
	
}
