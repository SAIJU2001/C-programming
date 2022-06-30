//input any no and check that the no is amstrong or not.

#include<stdio.h>

int main()
{
	int l,n,result=0,rem,cnt,count=0,mul=1;
	printf("Enter the no : ");
	scanf("%d",&n);
	printf("\n");
	l=n;
	while(l!=0)
	{
		l=l/10;
		count++;
	}
	cnt=count;
	l=n;
	while(l!=0)
	{
		rem=l%10;
		while(cnt!=0)
		{
			mul=mul*rem;
			cnt--;
		}
		cnt=count;
		result=result+mul;
		l=l/10;
		mul=1;
	}
	if(result==n)
	printf("The no %d is an amstrong number",n);
	else
	printf("The no %d is not an amstrong number",n);
	return 0;	
}
