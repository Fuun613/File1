#include <stdio.h>
#include <conio.h>
#include <string.h>
void nhap(int a[50],int n);
void xuat(int a[50],int n);
int main()
{
	int a[50],n;
	printf("\n Nhap so phan tu n: ");
	scanf("%d",&n);
	nhap(a,n);
	printf("\n Mang vua nhap la:");
	xuat(a,n);
	return 0;
}
void nhap(int a[50],int n)
{
	if(n>0)
	{
		nhap(a,n-1);
		printf("\n Nhap phan tu thu %d: ",n);
		scanf("%d",&a[n]);
	}
}
void xuat(int a[50],int n)
{
	if(n>0)
	{
		xuat(a,n-1);
        printf(" %d ",a[n]);
	}
}
