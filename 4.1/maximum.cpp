#include<stdio.h>
main()
{
	int a,b,n,remainder, maximum=0;
	
	printf("Enter Number To Find Out The Maximum From Given Number : ");
	scanf("%d",&n);
	
	for(a=1; a<=n; a++)
	{
		while(n>0)
		{
			remainder = n%10;
			maximum = remainder;
			n=n/10;
		}
	}
		
	for(a=1; a<=n; a++)
	{
		if(maximum < remainder)
		{
			maximum = remainder;
		}
	} 
	
	printf("\n The Maximum Value From Given Number Is = %d",maximum);
}