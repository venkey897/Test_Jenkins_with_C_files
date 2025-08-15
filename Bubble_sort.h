#include<stdio.h>
void bubble_sort_m(int *arr,int size)
{
	int index,travel_index;
	for (index=0;index<size;index++)
	{
		for(travel_index=0;travel_index<size-index-1;travel_index++)
		{
			
			if(arr[travel_index]>arr[travel_index+1]){
				int temp;
				temp=arr[travel_index];
				arr[travel_index]=arr[travel_index+1];
				arr[travel_index+1]=temp;
			}
		}
	}
	printf("Sorted Elements are\n");
	for(index=0;index<size;index++){
		printf("%d\t",arr[index]);
	}
}


