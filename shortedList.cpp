#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
struct Array{
	int *A;
	int Length;
	int Size;
};
void INIT()
{
	int i;
	struct Array arr;
	printf("\nEnter the size of Array: ");
	scanf("%d",&arr.Size);
	printf("\nEnter the Length of Elements: ");
	scanf("%d",&arr.Length);
	arr.A=(int *)malloc(arr.Size*sizeof(int));
	for(i=0;i<arr.Length;i++)
	{
		printf("\n%d>> ",i+1);
		scanf("%d",&arr.A[i]);
//		printf("\nAddress>> %d ",&arr.A[i]);
		
	}
	for(i=0;i<arr.Length;i++)
	{
		printf("\n%d>>%d",i,arr.A[i]);
//		printf("\nAddress>> %d ",&arr.A[i]);
	}
}
void AShorting()
{
	struct Array arr;
	int i,j,temp;
	printf("\n Ascending..");
	for(i=0;i<arr.Length;i++)
	{
		for(j=i+1;j<arr.Length;j++)
		{
			if(arr.A[i]>arr.A[j])
			{
				temp=arr.A[i];
				arr.A[i]=arr.A[j];
				arr.A[j]=temp;
			}
		}
	}
	for(i=0;i<arr.Length;i++)
	{
		printf("\n%d>> %d",i,arr.A[i]);
	}
}
void DShorting()
{
	struct Array arr;
	int i,j,temp;
	printf("\n Descending..");
	for(i=0;i<arr.Length;i++)
	{
		for(j=i+1;j<arr.Length;j++)
		{
			if(arr.A[i]<arr.A[j])
			{
				temp=arr.A[i];
				arr.A[i]=arr.A[j];
				arr.A[j]=temp;
			}
		}
	}
	for(i=0;i<arr.Length;i++)
	{
		printf("\n%d>> %d",i,arr.A[i]);
	}
}
int main()
{
	INIT();
	AShorting();
	DShorting();
	return 0;
}
