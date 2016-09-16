#include <stdio.h>
#define N 10
int Writer(int*);
void qvchong(int*,int);
int main()
{
	printf("请分别输入两个数组的集合：\n");
	int a[N],b[N];
	int i=0,j=0;
	int n1,n2;//两个集合元素个数
	n1 = Writer(a);//写入
	n2 = Writer(b);
	 
	//去重!
	qvchong(a,n1);
	qvchong(b,n2);
	
	//并集 
	printf("并集：\n");
	for(i=0;i<n1;i++)
	{
		for(j=0;j<n2;j++)//遍历b数组，查找重复元素 
		{
			if(a[i] == b[j]&&a[i]!=-1&&b[j]!=-1)
			{
				printf("\t%d",a[i]);
			}
		}
	}

	//并集 
	printf("\n交集：\n");
	for(i=0;i<n1;i++)
	{
		for(j=0;j<n2;j++)//遍历b数组，查找重复元素 
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
	for(int i=0;i<n-1;i++)//遍历b数组，查找重复元素 
		{
			if(a[i] == a[i+1])
			{
				a[i]=-1;
			}
		}
 } 

