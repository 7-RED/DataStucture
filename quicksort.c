#include <stdio.h>
//quicksort
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int partition(int data[], int start, int end)
{
    int pivot = data[end];
    int pIndex = start;
    for (int i = start; i < end; i++)
    {
        if (data[i] <= pivot)
        {
            swap(&data[i], &data[pIndex]);
            pIndex++;
        }
    }
    swap (&data[pIndex], &data[end]);
    return pIndex;
}

void quicksort(int data[],int start,int end){
    if (start>=end){
        return;
    }
    int pivot = partition(data, start, end);
    quicksort(data, start, pivot - 1);
    quicksort(data, pivot + 1, end);
}
int main() {
	//code
	int data[16]={89, 34, 23, 78, 67, 100, 66, 29, 79, 55, 78, 88, 92, 96, 96, 23};
	int n = sizeof(data)/sizeof(data[0]);
	
	quicksort(data, 0, n-1);
	
	for (int i = 0;i<n;i++){
	    printf("%d ",data[i]);
	}
	return 0;
}
