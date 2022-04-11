#include <stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	int m=n/1000;
	n=n-(n/1000)*1000;
	int d=n/100;
	n=n-(n/100)*100;
	int l=n/10;
	int x=n-(n/10)*10;
	for(i=0;i<m;i++)
		printf("M");
	if(d==4)
		printf("CD");
	else if(d==9)
		printf("CM");
	else if(d>=5)
	{
		printf("D");
		for(i=0;i<d-5;i++)
			printf("C");
	}
	else
	{
		for(i=0;i<d;i++)
			printf("C");
	}
	//
	if(l==4)
		printf("XL");
	else if(l==9)
		printf("XC");
	else if(l>=5)
	{
		printf("L");
		for(i=0;i<l-5;i++)
			printf("X");
	}
	else
	{
		for(i=0;i<l;i++)
			printf("X");
	}
	//
	if(x==4)
		printf("IV");
	else if(x==9)
		printf("IX");
	else if(x>=5)
	{
		printf("V");
		for(i=0;i<x-5;i++)
			printf("I");
	}
	else
	{
		for(i=0;i<x;i++)
			printf("I");
	}
    return 0;
}

