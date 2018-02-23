#include <stdio.h>

int main(void) {
	// your code goes here
	int n;
	scanf("%d",&n);
	if (1<=n && n<=100000)
	{
	if (n%2==0)
	{
		printf("Even");
	}
	else
	{
		printf("odd");
	}
	}
	return 0;
}
