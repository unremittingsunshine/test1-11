//#include<stdio.h>
//���δ���ַʱ��Ӧ����ָ����д��Ρ�
//int Add(int x, int y)
//{
//	int count;
//	return count = x + y;
//}
//int Add(const int *const x,  int *const y)
//{
//	return *y = *y+*x;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("%d\n", Add(&a, &b));
//	return 0;
//}

//#include<stdio.h>
//void Print(char *a)
//{
//	printf("%s\n", a);
//}
//
//int main()
//{
//	/*char arr[] = { "hi,my girl!" };*/
//	char *a = (char*)"asdf" ;
//	Print(a);
//	return 0;
//}
//#include<stdio.h>
//void Print(char arr1[])
//{
//	printf("%s\n", arr1);
//}
//void Print(char *arr1)
//{
//	printf("%s\n", arr1);
//}
//void Print(char (*pp)[10])
//{
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d\n", (*pp)[i]);
//	}
//	
//}
//
//int main()
//{
//
//	char arr1[10] = { 1,2,3,4,5,6,7,8,9 ,10};
//	char(*p)[10] = &arr1;
//	Print(p);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	char arr[5] = { 1,2,3,4,5 };
//	char *p = arr;
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//}

//#include<stdio.h>
////ֱ�����ö�ά�����ӡ�����������鴫�θ���ӡ�����������Ĵ��λᵼ��ջ���ڴ�ռ�ù��ࣻ
//void Print1(int arr1[][3])
//{
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			printf("%d ", arr1[i][j]);
//		}
//		printf("\n");
//	}
//}
//
////��ά������������ָ����е���
////void Print(int(*pp)[3])
////{
////	for (int i = 0; i < 3; i++)
////	{	
////		//i��������ָ�����ڵ��������Ӷ�����ά�����е�ÿһ��Ԫ�����δ�ӡ��
////		for (int j = 0; j < 3; j++)
////		{
////			printf("%d ", *(pp[j] + i));
////		}
////		printf("\n");
////	}
////	printf("\n");
////}
//
//int main()
//{
//	int arr[3][3] = { {1,2,3},{2,3,4}, {3, 4, 5} };
//	Print1(arr);
//	//int(*p)[3]= arr;//�����ǽ�arr��ά�������������ĵ�ַ���뵽ָ������P�У�
//	//Print(p);
//	//printf("%p\n%p\n", arr, p);
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
////ֱ�ӵ��ú�������ADD;
////int ADD(int x, int y)
////{
////	return x = x + y;
////}
//int main()
//{
//	int x, y;
//	scanf("%d %d",&x,&y);
//	printf("%d\n",ADD(x, y));
//	return 0;
//}
//#include<stdio.h>
//���ú���ָ������Զ��庯���ĵ��ã�
//int* ADD(int x, int y)
//{
//	int *a = &x;
//	 x=x+y;
//	 return a;
//}
//int main()
//{
//	int x = 10, y = 20;
//	int* (*p)(int x, int y) = ADD;
//	printf("%d\n", *(p(x,y)));
//	return 0;
//}
//#include<stdio.h>
//void Print(int(*pp)[5],int x,int y)
//{
//	for (int i = 0; i < x; i++)
//	{
//		for (int j = 0; j < y; j++)
//		{
//			printf("%d ", pp[i][j]);
//		}
//	}
//}
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	int(*p)[5] =arr;
//	Print(p, 3, 5);
//	return 0;
//}













