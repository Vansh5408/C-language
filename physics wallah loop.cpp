#include <stdio.h>
int main ()
{
	int n,i,s=1 ;
	for (n=5;n<=10;n++)
	{
		for(i=1;i<=n;i++)
		s=s*i;
	}
	printf("%d",s);
}
