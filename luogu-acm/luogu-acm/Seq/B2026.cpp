#include<stdio.h>
int main()
{
	double a,b;
	scanf("%lf %lf",&a,&b);//lfǰ�治Ҫ������% 
	double r,k;
	k=a/b;//����С��������ȡ������ 
	r=a-(int)k*b;
	printf("%lf",r);
	return 0; 
}
