#include<stdio.h>
//�ɳ�����չ����ζ�����Ӷ��٣����Ķ��٣� 
//�����ٶ�v=(by-ax)/(b-a);
//ÿ�������ٶȼ�Ϊ 

int main()
{
	int x,a,y,b;
	scanf("%d%d%d%d",&x,&a,&y,&b);
	printf("%.2f",1.0*(b*y-a*x)/(b-a));
	return 0;
}
