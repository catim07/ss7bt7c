#include<stdio.h>
int main(){
	int n;
	printf("moi ban nhap so phan tu cua mang la: ");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
			while(a[i]%2==0){
				printf("ban phai nhap so le: ");
				scanf("%d",&a[i]);
			}
	}
	for(int i=0;i<5;i++){
		printf("%d",a[i]);
	}
}
