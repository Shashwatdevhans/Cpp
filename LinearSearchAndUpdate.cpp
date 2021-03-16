#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
struct Array{
	int *A;
	int length;
	int size;
};
void INIT()
{
	struct Array arr;
	printf("Enter the size of Array: ");
	scanf("%d",&arr.size);
	arr.A=(int *)malloc(arr.size*sizeof(int));
	printf("\nEnter the length of Array input: ");
	scanf("%d",&arr.length);
	int i;
	for(i=0;i<arr.length;i++)
	{
		printf("%d>>",i+1);
		scanf("%d",&arr.A[i]);
	}
	printf("\nIndex\n");
	for(i=0;i<arr.length;i++)
	{
		printf("%d>>%d\n",i,arr.A[i]);
	}
	printf("\nLength= %d",arr.length);
	printf("\nSize= %d",arr.size);
}
void LinearSearch()
{
	struct Array arr;
	printf("\nEnter the Element you want to search: ");
	int search,i,count=0,temp;
	scanf("%d",&search);
	for(i=0;i<arr.length;i++)
	{
		if(arr.A[i]==search)
		{
			count++;
			printf("\nNumber of Elements matched: %d",count);
			printf("\nsearch found...");
			printf("\n Index number of Your search is: %d",i);
			if(i!=0)
			{
				printf("\nSwaping");
				temp=arr.A[i];
				arr.A[i]=arr.A[i-1];
				arr.A[i-1]=temp;
			}

		}
	}
	if(count==0)
	{
		printf("\nsearch Not Found....");
		printf("\nlength= %d",arr.length);
	}
	printf("\nIndex\n");
			for(i=0;i<arr.length;i++)
			{
				printf("%d>>%d\n",i,arr.A[i]);
			}
}
int main()
{
	INIT();
	int i=0;
	while(i==0)
	{
	LinearSearch();
	}
	return 0;
}
