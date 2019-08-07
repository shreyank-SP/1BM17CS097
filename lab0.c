
#include <stdio.h>

int  main()
{  int N=0,i,max,arr[10];
   printf("enter the Number of integers :");
   scanf("%d",&N);
   printf("enter the values");
   for(i=0;i<N;i++)
   {
	   scanf("%d",&arr[i]);
   }
   max=arr[0];
   for(i=0;i<N;i++)
   {   
	   if(max<arr[i])
	   {
		   max=arr[i];
	   }
   }
   printf("maximum element is %d \n",max);
   return 0;
}
