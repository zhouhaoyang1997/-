#include <stdio.h>
#define N 10
int Writer(int*);
void qvchong(int*,int);
int main()
{
	printf("��ֱ�������������ļ��ϣ�\n");
	int a[N],b[N];
	int i=0,j=0;
	int n1,n2;//��������Ԫ�ظ���
	n1 = Writer(a);//д��
	n2 = Writer(b);
	 
	//ȥ��!
	qvchong(a,n1);
	qvchong(b,n2);
	
	//���� 
	printf("������\n");
	for(i=0;i<n1;i++)
	{
		for(j=0;j<n2;j++)//����b���飬�����ظ�Ԫ�� 
		{
			if(a[i] == b[j]&&a[i]!=-1&&b[j]!=-1)
			{
				printf("\t%d",a[i]);
			}
		}
	}

	//���� 
	printf("\n������\n");
	for(i=0;i<n1;i++)
	{
		for(j=0;j<n2;j++)//����b���飬�����ظ�Ԫ�� 
		{
			if(a[i] == b[j])
			{
				b[j]=-1;
			}
		}
		
		if(a[i] != -1)
		{
				printf("\t%d",a[i]);
		}
		
	}
	for(j=0;j<n2;j++)
	{
		if(b[j]!=-1)
		{
			printf("\t%d",b[j]);
		}
	}

	return 0;
}
int Writer(int* a)
{
	int num,n=0;
	while(true) 
	{       
		scanf("%d",&num);                                                                                                                                                         
		if(num>=0)
			{
				a[n] = num;
				n++;
			}
		else
			break;
	}
return n;
}
void qvchong(int* a,int n)
{
	for(int i=0;i<n-1;i++)//����b���飬�����ظ�Ԫ�� 
		{
			if(a[i] == a[i+1])
			{
				a[i]=-1;
			}
		}
 } 

