#include<stdio.h>
#define N 300
//�³�+300Ԫ
//�³�-��Ԥ�㣩Ԫ
//����100��-100Ԫ//����200��-200Ԫ//����300��-300Ԫ//ʣ��/100=q��-q*100Ԫ
//ĳ��+300��-Ԥ���<0�����-����·�
//12�³�+300-Ԥ��+�洢��Ǯ*1.2
int main()
{
	int precost[12],hand=0,bank=0;
	for(int i=0;i<12;i++)
	{
		scanf("%d",&precost[i]);
	}
	int n=1;
	for(int i=0;i<12;i++)
	{
		hand=hand+N-precost[i];
		//printf("��%d�¼�ȥԤ�㻹ʣ��%d\n",i+1,hand);
		if(hand<0)
		{
			n=0;
			printf("-%d",i+1);
			break;
		}
		if((hand/100)>0)
		{
			bank=bank+hand/100*100;
			hand=hand-hand/100*100;
		}
		if(i==11)
		{
			hand=hand+bank*1.2;
		}
	}
	if(n==1)
	{
		printf("%d",hand);
	}
	return 0;
} 
