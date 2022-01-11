//#include<stdio.h>
//传参传地址时，应该用指针进行传参。
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
////直接利用二维数组打印，将整个数组传参给打印函数，这样的传参会导致栈区内存占用过多；
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
////二维数组利用数组指针进行调用
////void Print(int(*pp)[3])
////{
////	for (int i = 0; i < 3; i++)
////	{	
////		//i代表数组指针所在的行树；从而将二维数组中的每一行元素依次打印；
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
//	//int(*p)[3]= arr;//这里是将arr二维数组的首行数组的地址存入到指针数组P中；
//	//Print(p);
//	//printf("%p\n%p\n", arr, p);
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
////直接调用函数进行ADD;
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
//利用函数指针进行自定义函数的调用；
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













