#include<stdio.h>
//���С���ѷֱ����ǹ�abcde
//1��С���ѷ������ǹ���ʣ��a=a/3���������ݸ�2�ź�5�ţ�����x1=a%3��
int main()
{
	int a,b,c,d,e;
	int x1,x2,x3,x4,x5;
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	//1�ŷ� 
	x1=a%3;
	a/=3;
	b=a+b;
	e=a+e;
	//2�ŷ� 
	x2=b%3;
	b/=3;
	a=b+a;
	c=b+c;
	//3�ŷ� 
	x3=c%3;
	c/=3;
	b=c+b;
	d=c+d;
	//4�ŷ�
	x4=d%3;
	d/=3;
	c=d+c;
	e=d+e;
	//5�ŷ�
	x5=e%3;
	e/=3;
	a=e+a;
	d=e+d;
	int x=x1+x2+x3+x4+x5;
	printf("%d %d %d %d %d\n%d",a,b,c,d,e,x);
	return 0; 
}
