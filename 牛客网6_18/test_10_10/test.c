#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//1.
//5位运动员参加了10米台跳水比赛，有人让他们预测比赛结果
//A选手说：B第二，我第三；
//B选手说：我第二，E第四；
//C选手说：我第一，D第二；
//D选手说：C最后，我第三；
//E选手说：我第四，A第一；
//比赛结束后，每位选手都说对了一半，请编程确定比赛的名次。
//
//2.
//日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个
//嫌疑犯的一个。以下为4个嫌疑犯的供词。
//A说：不是我。
//B说：是C。
//C说：是D。
//D说：C在胡说
//已知3个人说了真话，1个人说的是假话。
//现在请根据这些信息，写一个程序来确定到底谁是凶手。
//
//3.在屏幕上打印杨辉三角。
//1
//1 1
//1 2 1
//1 3 3 1


//1.
//写一个函数返回参数二进制中 1 的个数
//比如： 15 0000 1111 4 个 1
//将输入的数如1进行与运算得1 count++  return count;
//
//程序原型：
//int count_one_bits(unsigned int value)
//{
//	// 返回 1的位数 
//}
//int count_one_bits(unsigned int value)
//{
//	int count = 0;
//	while (value)
//	{
//		value = value&(value - 1);
//		count++;
//	}
//	return count;
//	// 返回 1的位数 
//}

//int count_one_bits(unsigned int value)
//{
//	int count = 0;
//	unsigned int i = 0;
//	for (i = 1; i < 32; i++)
//	{
//		if ((value & 1) == 1)
//		{
//			count++;
//		}
//		value >>= 1;
//	}
//	return count;
//	// 返回 1的位数 
//}
//int count_one_bits(unsigned int value)
//{
//	int count = 0;
//	while (value)
//	{
//		if (value % 2 == 1)
//		{
//			count++;
//		}
//		value = value >> 1;
//	}
//	return count;
	// 返回 1的位数 
//}
//int count_one_bits(unsigned int value)
//{
//	int count = 0;
//	while (value)
//	{
//		if (value % 2 == 1)
//		{
//			count++;
//		}
//		value = value / 2;
//	}
//	return count;
//	// 返回 1的位数 
//}
//int main()
//{
//	int value;
//	int count = 0;
//	printf("请输入一个数:>");
//	scanf("%d", &value);
//	count = count_one_bits(value);
//	printf("%d中的1的个数为%d\n",value,count);
//	//system("pause");
//	return 0;
//}


//
//2.获取一个数二进制序列中所有的偶数位和奇数位，
//分别输出二进制序列。
////
//int main()
//{
//	int value;
//	int i = 0;
//	printf("请输入一个数:>");
//	scanf("%d", &value);
//	printf("奇数位:>\n");
//	for (i = 31; i >= 1; i -= 2)
//	{
        //取出value二进制中第i位的值
//		printf("%d ", (value >> i) & 1);
//		
//	}
//	printf("\n");
//	printf("偶数位:>\n");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (value >> i) & 1);
//	}
//	printf("\n");
//	return 0;
//}

//3. 输出一个整数的每一位。
//1234
//void Output(int value)
//{
//	if (value!=0)
//	{
//		printf("%d ", value % 10);
//		Output(value / 10);
//	}
//
//}
//int main()
//{
//	int num;
//	printf("请输入一个数:>");
//	scanf("%d", &num);
//	Output(num);
//}
//4.编程实现：
//两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？
//输入例子 :
//1999 2299
//输出例子 : 7
//int Count_bit(int m, int n)
//{
//	//两个数相与
//      int count = 0;
//      int i = 0;
//	  for (i = 0; i < 32; i++)
//	  {
//		  //
//		  if (((m >> i) & 1) != ((n >> i) & 1))
//		  {
//			  count++;
//		  }
//	  }
//	  return count;
//}
//int Count_bit1(int m, int n)
//{
//	//两个数异或
//	int ret = m^n;
//	int count = 0;
//	while (ret)
//	{
//		ret = ret&(ret - 1);
//		count++;
//	}
//	return count;
//	
//}
//int main()
//{
//	int num1, num2;
//	printf("请输入两个数:>\n");
//	scanf("%d%d", &num1, &num2);
//	int count = Count_bit(num1, num2);
//	int count1 = Count_bit1(num1, num2);
//	printf("%d和%d不同位个数为%d\n", num1, num2, count);
//	printf("%d和%d不同位个数为%d\n", num1, num2, count1);
//	return 0;
//}

//
//	   5.写博客总结C语言操作符，博客链接发给我，并分享到群里。




//int main()
//{
//	int year = 0;
//	int count = 0;
//	for(year=1000; year<=2000; year++)
//	{
//		//判断闰年
//		if(((year%4==0)&&(year%100!=0))||(year%400==0))
//		{
//			printf("%d ", year);
//			count++;
//		}
//		/*if(year%4==0)
//		{
//			if(year%100 != 0)
//			{
//				count++;
//				printf("%d ", year);
//			}
//		}
//		if(year%400==0)
//		{
//			count++;
//			printf("%d ", year);
//		}*/
//	}
//	//
//	printf("\ncount = %d\n", count);
//	return 0;
//}
//
//int main()
//{
//	//1*1=1
//	//2*1=2 2*2=4
//	//3*1=3 3*2=6 3*3=9
//	//....
//	//9*9
//	//
//	int i = 0;
//	for(i=1; i<=9; i++)
//	{
//		//打印一行
//		int j = 0;
//		for(j=1; j<=i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i*j);
//		}
//		//换行
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//		int i = 0;
//		int count = 0;
//	
//		for(i=100; i<=200; i++)
//		{
//			//判断i是否为素数
//			int j = 0;
//			for(j=2; j<=sqrt(i); j++)
//			{
//				if(i%j == 0)
//					break;	
//			}
//			//2...
//			if(j>sqrt(i))
//			{
//				count++;
//				printf("%d ", i);
//			}
//		}
//		//
//		printf("\ncount = %d\n", count);
//		return 0;
//	}
//
//	
//	int main()
//	{
//		int i = 0;
//		int count = 0;
//	
//		for(i=101; i<=200; i+=2)
//		{
//			//判断i是否为素数
//			int j = 0;
//			for(j=2; j<=sqrt(i); j++)
//			{
//				if(i%j == 0)
//					break;	
//			}
//			//2...
//			if(j>sqrt(i))
//			{
//				count++;
//				printf("%d ", i);
//			}
//		}
//		//
//		printf("\ncount = %d\n", count);
//		return 0;
//	}
//
//	
//	int main()
//	{
//		int i = 0;
//		int count = 0;
//	
//		for(i=100; i<=200; i++)
//		{
//			//判断i是否为素数
//			int j = 0;
//			for(j=2; j<i/2; j++)
//			{
//				if(i%j == 0)
//					break;	
//			}
//			//2...
//			if(j>=i/2)
//			{
//				count++;
//				printf("%d ", i);
//			}
//		}
//		//
//		printf("\ncount = %d\n", count);
//		return 0;
//	}
//
//

//1、实现一个函数，打印乘法口诀表，口诀表的行数与列数自己指定。
//void Print_table(int n)
//{
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%2d ", i, j, i*j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int line = 0;
//	scanf("%d", &line);
//	Print_table(line);
//	system("pause");
//	return 0;
//}
//2、使用函数实现两个数的交换。
//void Swap(int *px, int *py)
//{
//	int temp = 0;
//	temp = *px;
//	*px = *py;
//	*py = temp;
//}
//int main()
//{
//	int a = 3;
//	int b = 4;
//	Swap(a, b);
//	printf("%d%d ", a, b);
//	system("pause");
//	return 0;
//}
//3、实现一个函数判断两个数是不是闰年。
//int Year(int year)
//{
//	if (year % 4 == 0 && year % 100 != 0)
//		return 1;
//	if (year % 400 == 0)
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int year = 0;
//	int ret = 0;
//	scanf("%d", &year);
//	ret=Year(year);
//	if (ret = 1)
//		printf("是闰年\n");
//	else
//		printf("不是闰年\n");
//	system("pause");
//	return 0;
//}
//4、创建一个数组，实现函数Init（），初始化一个数组
//   实现Empty（），清空数组，实现Reverse（），完成数组元素逆置。
//void Init(int arr[], int sz,int set)
//{
//	int i = 0;
//	for (i = 0; i <= sz; i++)
//	{
//		arr[i] = set;
//	}
//
//}
//void Print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i <sz; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	printf("\n");
//}
//void Empty(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i <= sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void Reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz-1;
//	while (left < right)
//	{
//		int temp;
//		temp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = temp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	int arr[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	//Init(arr, 10,1);
//	//Empty(arr, 10);
//	Print(arr, 10);
//	Reverse(arr, 10);
//	Print(arr, 10);
//	system("pause");
//	return 0;
//}
//5、实现函数判断一个数是不是素数。
//1.递归和非递归分别实现第n个斐波那契数.
//int fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return fib(n - 1) + fib(n - 2);
//}
//int fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 0;
//	if (n <= 2)
//		return 0;
//	else
//	{
//		int i = 0;
//		for (i = 1; i <= n - 2; i++)
//		{
//			c = a + b;
//			a = b;
//			b = c;
//		}
//		return c;
//	}
//}
//int fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	if (n <= 2)
//		return c;
//	else
//	{
//		int i = 0;
//		for (i = 2; i < n ; i++)
//		{
//			c = a + b;
//			a = b;
//			b = c;
//		}
//		return c;
//	}
//}
//
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	fib(n);
//	printf("%d\n", fib(n));
//	system("pause");
//	return 0;
//}
//2.编写一个函数实现n^k.使用递归实现.
//int Nk(int n, int k)
//{
//	if (k <= 0)
//		return 1;
//	else
//		return n*Nk(n, k - 1);
//}
//int main()
//{
//	int n,k;
//	int ret;
//	scanf("%d%d", &n, &k);
//	ret = Nk(n, k);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}
//3.写一个递归函数DigitSum(n),输入一个非负整数,返回组成它的数字之和.
//int DigitSum(int n)
//{
//
//}
//int main()
//{
//	int n;
//	int ret;
//	scanf("%d", &n);
//	ret = DigitSum(n);
//	printf("%d\n", ret);
//	return 0;
//}
//4.编写一个函数reverse_string(char*string)(递归实现)
   //实现:将参数字符串中的字符反向排序
   //要求:不能使用c函数库中的字符串操作函数
//5.递归和非递归分别实现strlen
//6.递归和非递归分别实现n的阶乘
//7.递归方式实现打印一个整数的每一位
//#include<stdio.h>
//#include<assert.h>
//#include<stdlib.h>
//int my_strlen(const char *str)
//{
//	assert(str);
//	int len = 0;
//	while (*str++)
//	{
//		len++;
//	}
//	return len;
//}
//void reverse(char *start, char *end)
//{
//	assert(start);
//	assert(end);
//	while (start < end)
//	{
//		char tmp = *start;
//		*start = *end;
//		*end = tmp;
//		start++;
//		end--;
//	}
//}
//void str_reverse(char *str)
//{
//	assert(str);
//	int len = my_strlen(str);
//	reverse(str, str + len - 1);
//	while (*str != '\0')
//	{
//		char *p = str;
//		while ((*str != ' ') && (*str != '\0'))
//		{
//			str++;
//		}
//		reverse(p, str - 1);
//		if (*str != '\0')
//		{
//			str++;
//		}
//	}
//}
//int main()
//{
//	char str[] = "student a am i";
//	str_reverse(str);
//	printf("%s\n", str);
//	system("pause");
//	return 0;
//}
