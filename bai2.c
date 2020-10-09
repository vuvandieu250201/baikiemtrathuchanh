#include <stdio.h>
#include<stdlib.h>

int main1(){
int a[10], i;
	
	for(i=0;i<10;i++)
	{
		printf("hay nhan cac phan tu cua mang \n");
		printf("\n+Number %d : ",i+1);
		scanf("%d",&a[i]);
	}
	printf("\nDaonguoc: ");
	for(i--;i>=0;i--)
	{
		if(i>0)
			printf("%d, ",a[i]);
		else
			printf("%d.",a[i]);
	}
	return 0;
	
}
