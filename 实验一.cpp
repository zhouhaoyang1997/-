#include<stdio.h>
#define N 10
int GetMax(int[],int);
int GetMin(int[],int);
int GetSum(int[],int);
int main()
{
	int num,max,min,sum;
	int n=0;
	int Numbers[N];
	printf("�������������Ը���������\n");
	
	while(true) 
	{       
		scanf("%d",&num);                                                                                                                                                         
		if(num>=0)
			{
				Numbers[n] = num;
				n++;
			}
		else
			break;
	}
	max = GetMax(Numbers,n);
	min = GetMin(Numbers,n);
	sum = GetSum(Numbers,n);
	printf("���%d\n",max);
	printf("��С��%d\n",min);
	printf("�ܺͣ�%d\n",sum);
	printf("ƽ������%d\n",sum/n);
	return 0;
 } 
 int GetMax(int a[],int n)
 {
 	int i = 1;
 	int max = a[0];
 	while(true)
 	{
 		if(max<a[i])
 		{
 			max = a[i];
	 	}
	 	i++;
	 	if(i == n)
	 	{
	 		break;
		 }
	 }
 	return max;
 }
 int GetMin(int a[],int n)
 {
 	int i = 1;
 	int min = a[0];
 	while(true)
 	{
 		if(min>a[i])
 		{
 			min = a[i];
	 	}
	 	i++;
	 	if(i == n)
	 	{
	 		break;
		 }
	 }
 	return min;
 }
  int GetSum(int a[],int n)
 {
 	int sum,i;
 	for(i=0; i<n; i++)
 	{
 		sum+=a[i];
	 }
 	return sum;
 }
 
 
