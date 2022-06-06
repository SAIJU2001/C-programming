#include<stdio.h>
#include<limits.h>

int main()
{	
	//Range of signed integer
	int var1=INT_MIN;
 	int var2=INT_MAX;
	printf("Range of the signed integer is %d to %d\n",var1,var2);
	
	//Range of signed short integer
	short int var5=SHRT_MIN;
 	short int var6=SHRT_MAX;
	printf("Range of the short integer is %d to %d\n",var5,var6);
	
	//Range of signed long integer
	long int var7=LONG_MIN;
 	long int var8=LONG_MAX;
	printf("Range of the long signed integer is %d to %d\n",var7,var8);
	
	//Range of unsigend integer
	unsigned int var3=0;
 	unsigned int var4=UINT_MAX;
	printf("Range of the Unsigned integer is %u to %u\n",var3,var4);
	
	//Range of unsigned short integer
	unsigned short int var9=0;
 	unsigned short int var10=USHRT_MAX;
	printf("Range of the short unsigned integer is %d to %d\n",var9,var10);
	//Range of unsigned long integer
	unsigned long int var11=0;
 	unsigned long int var12=ULONG_MAX;
	printf("Range of the long unsigned integer is %d to %d\n",var11,var12);
	
	printf("\nThank You for using the code.\n\nCreated & Designed by SAIKAT.");
	
	return 0;
}
