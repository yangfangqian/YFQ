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
	printf("������n��");
	scanf("%d",&n);
	printf("������n�Ĵη�p:");
	scanf("%d",&p);
	
	N = PowMod(n,p); 
	
	printf("n��p�η���M��ģΪ��%d",N); 
	return 0;
 } 
