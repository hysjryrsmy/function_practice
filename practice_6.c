#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//1.写一个函数可以判断一个数是不是素数
//是素数返回1；不是素数返回0
/*
#include <math.h>
int is_prime(int n)
{  
	int j = 0;
	for (j = 2; j <= sqrt(n); j++)
	{
		if (n % j == 0)
			return 0;
	}
	return 1;
}
int main()
{
	//打印100-200之间的素数
	int i = 0;
	for (i = 100; i <= 200; i++)
	{
		//判断i是否为素数
		if (is_prime(i) == 1)
			printf("%d ", i);
	}
	return 0;
}*/


//2.写一个函数可以判断一年是不是闰年(1000年-2000年)
//判断year是否为闰年
//1.能被4整除并且不能被100整除是闰年
//2.能被400整除是闰年
//如果是闰年就返回1；如果不是闰年就返回0；
/*
int is_leap_year(y)
{
	if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))

		return 1;
	else
		return 0;
}

int main()
{
	int year = 0;
	for (year = 1000; year < 2000; year++)
	{
		//判断year是否为闰年
		if (is_leap_year(year) == 1)
		{
			printf("%d ", year);
		}
	}
	return 0;
}*/


//3.写一个函数，实现一个整形有序数组的二分查找
//二分查找：在一个有序数组中查找具体的某个数
//如果找到了返回这个数的下标。找不到的返回1
                    //本质上arr是一个指针
/*
int binary_search(int arr[], int k, int sz)
{
	//算法的实现	
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		int mid = (left + right)/2; //中间元素的下标
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
			return mid;
	}
}

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10};
	int k = 7;
	                  //  传递过去的是数组arr首元素的地址          
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret = binary_search(arr, k, sz);
	if (ret == -1)
	{
		printf("找不到指定的数字\n");
	}
	else
	{
		printf("找到了，下标是：%d\n", ret);
	}
	return 0;
}*/


//4.写一个函数，每调用一次这个函数，就会将num的值增加1
void Add(int* p)
{
	(*p)++;
}

int main()
{
	int num = 0;
	Add(&num);
	printf("num = %d\n", num);//1
	Add(&num);
	printf("num = %d\n", num);//2
	Add(&num);
	printf("num = %d\n", num);//3
	return 0;
}