//����ȷ���� a �������� b����������ڸ�ʡ�������ʡ�
//������p=b/a 
#include<stdio.h>
int main()
{
	double a,b,p;
	scanf("%lf",&a);

	scanf("%lf",&b);

	p=b/a*100;
	printf("%.3lf%%",p);
	return 0;
}
