#include<stdio.h>
int main(int argc, char const *argv[])
{
	int size=5;
	for(int i=1;i<=size;i++)
	{
		for(int j=1;j<=size-i;j++)
			printf(" ");
		for(int j=i;j>1;j--)
			printf("%d",j);
		for(int j=1;j<=i;j++)
			printf("%d",j);
		for(int j=1;j<=size-i;j++)
			printf(" ");
		printf("\n");
	}
	// to stop console from closing
	int stable;
	scanf("%d",&stable);
	return 0;
}