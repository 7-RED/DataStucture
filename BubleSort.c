#include<stdio.h>
void buble_sort(int a[],int length)
{
	for(int i=0;i<length-1;i++)//比對length輪，表示目前在a[length]
		for(int j=0;j<length-1-i;j++)//進行比對
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
	int a[]={6,3,8,5,1};//命名陣列

	printf("原陣列：");
	for(int x=0;x<5;x++)
		printf(" %d",a[x]);//印出原陣列

	buble_sort(a,5);//進入排序函數

	printf("\n排序後的陣列：");
	for(int y=0;y<5;y++)
		printf(" %d",a[y]);//印出排序後陣列

	return 0;
	
}
