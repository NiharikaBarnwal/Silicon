#include<stdio.h>
int main()
{
        int k,l,arr[6],j,i;
        printf("enter the array:");
        for(i=0;i<6;i++)
	{
		scanf("%d",&arr[i]);
			
	}
    	for(j=0;j<6;j++)
	{
		if(arr[j]==5)
		{
			for(k=j;k<6;k++)
			{
				arr[k]=arr[k+1];
			}
			break;
		}
	}
	for(l=0;l<6-1;l++)
	{
		printf("%d ",arr[l]);
	}
	return 0;
}

