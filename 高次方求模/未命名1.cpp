#include <bits/stdc++.h>
#define M 5


int PowMod(int n, int p)
{
	int result = 1;
	while (p > 0)
	{
		if (p % 2 == 1)
		{
			result = (result*n) % M;
		}
		p /= 2;
		n = (n*n) % M;
	}
	return result;
}


int main()
{
	int n,p,N;
	printf("请输入n：");
	scanf("%d",&n);
	printf("请输入n的次方p:");
	scanf("%d",&p);
	
	N = PowMod(n,p); 
	
	printf("n的p次方对M的模为：%d",N); 
	return 0;
 } 
