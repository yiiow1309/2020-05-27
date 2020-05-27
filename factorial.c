#include<Stdio.h>
int factorial(int n)
{
	if(n == 1)
		return 0;
	
	return n * factorial(n - 1);
}
int main()
{
	printf("%d",factorial(5));
	
	return 0;
}
