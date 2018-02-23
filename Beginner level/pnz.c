#include <stdio.h>

int main(void) {
	// your code goes here
	int n;
	scanf("%d",&n);
	if(1<=n && n<=100000)
	{
		printf("positive");
		}else if(n==0)
		{
			printf("Zero");
		}
		else
		{
			printf("Negative");
		
	}
	return 0;
}
