#include <stdio.h>

void main()
{   int tc,i,j,N,f,l,ele,mid,arr[10],flag=0;
	printf("enter the number of test cases");
	scanf("%d",&tc);
	printf("\n");
	for(j=0;j<tc;j++)
	{
	printf("enter the number of elements in the array and element to find in the array");
	scanf("%d%d",&N,&ele);
	printf("enter the array elements");
	   for(i=0;i<N;i++)
   {
	   scanf("%d",&arr[i]);
   }
   
	f=0;l=N;
    
	while(f<=l)
	{ 	mid=(f+l)/2;
	  if(ele==arr[mid])
	  {  flag=1;
	  printf("1");
		break;
	
	  }
	  else if(ele>arr[mid])
	  {
		  f=mid+1;
	  }	
	  else
	  {
		  l=mid-1;
	  }
	  
	}
	
	if(flag==0)
	{
		printf("-1\n");
	}
	
	
 }
}
