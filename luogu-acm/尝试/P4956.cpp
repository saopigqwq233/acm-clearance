//����ＯnԪ
//ÿ����Ҫ NԪ=n/52 
//ÿ����Ǯ7x+21k=N
//��x�����ʼѭ�� 
//Ƕ�� k ����С��ʼ����
#include<stdio.h>
int main()
{
	int n,N,x=100,k;
	scanf("%d",&n);
	N=n/52;
	for(x=100;x>0;x--)
	{
		for(k=1;21*k<N;k++)
		{
			if(7*x+21*k==N)break;
			else continue;
		}	
		if(7*x+21*k==N)break;
	}
	printf("%d\n%d",x,k);
	return 0;
} 
 
