#include<stdio.h>
void buble_sort(int a[],int length)
{
	for(int i=0;i<length-1;i++)
		for(int j=0;j<length-1-i;j++)
		{
			if(a[j]>a[j+1])
				{
					int ch=a[j];
					a[j]=a[j+1];
					a[j+1]=ch;
				}
		}
}

int main()
{
	int n=5;
	int a[]={6,3,8,5,1};
	printf("原陣列：");
	for(int q=0;q<n;q++)
		printf(" %d",a[q]);

	buble_sort(a,n);

	printf("\n排序後：");
	for(int x=0;x<n;x++)
		printf(" %d",a[x]);

	n=(n+1)/2-1;//中位數計算方式
	printf("\nMedian=%d",a[n]);

	return 0;
	
}
