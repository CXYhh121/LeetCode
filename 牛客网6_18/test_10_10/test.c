#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//1.
//5λ�˶�Ա�μ���10��̨��ˮ����������������Ԥ��������
//Aѡ��˵��B�ڶ����ҵ�����
//Bѡ��˵���ҵڶ���E���ģ�
//Cѡ��˵���ҵ�һ��D�ڶ���
//Dѡ��˵��C����ҵ�����
//Eѡ��˵���ҵ��ģ�A��һ��
//����������ÿλѡ�ֶ�˵����һ�룬����ȷ�����������Ρ�
//
//2.
//�ձ�ĳ�ط�����һ��ıɱ��������ͨ���Ų�ȷ��ɱ�����ֱ�Ϊ4��
//���ɷ���һ��������Ϊ4�����ɷ��Ĺ��ʡ�
//A˵�������ҡ�
//B˵����C��
//C˵����D��
//D˵��C�ں�˵
//��֪3����˵���滰��1����˵���Ǽٻ���
//�����������Щ��Ϣ��дһ��������ȷ������˭�����֡�
//
//3.����Ļ�ϴ�ӡ������ǡ�
//1
//1 1
//1 2 1
//1 3 3 1


//1.
//дһ���������ز����������� 1 �ĸ���
//���磺 15 0000 1111 4 �� 1
//�����������1�����������1 count++  return count;
//
//����ԭ�ͣ�
//int count_one_bits(unsigned int value)
//{
//	// ���� 1��λ�� 
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
//	// ���� 1��λ�� 
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
//	// ���� 1��λ�� 
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
	// ���� 1��λ�� 
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
//	// ���� 1��λ�� 
//}
//int main()
//{
//	int value;
//	int count = 0;
//	printf("������һ����:>");
//	scanf("%d", &value);
//	count = count_one_bits(value);
//	printf("%d�е�1�ĸ���Ϊ%d\n",value,count);
//	//system("pause");
//	return 0;
//}


//
//2.��ȡһ�������������������е�ż��λ������λ��
//�ֱ�������������С�
////
//int main()
//{
//	int value;
//	int i = 0;
//	printf("������һ����:>");
//	scanf("%d", &value);
//	printf("����λ:>\n");
//	for (i = 31; i >= 1; i -= 2)
//	{
        //ȡ��value�������е�iλ��ֵ
//		printf("%d ", (value >> i) & 1);
//		
//	}
//	printf("\n");
//	printf("ż��λ:>\n");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (value >> i) & 1);
//	}
//	printf("\n");
//	return 0;
//}

//3. ���һ��������ÿһλ��
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
//	printf("������һ����:>");
//	scanf("%d", &num);
//	Output(num);
//}
//4.���ʵ�֣�
//����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ��
//�������� :
//1999 2299
//������� : 7
//int Count_bit(int m, int n)
//{
//	//����������
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
//	//���������
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
//	printf("������������:>\n");
//	scanf("%d%d", &num1, &num2);
//	int count = Count_bit(num1, num2);
//	int count1 = Count_bit1(num1, num2);
//	printf("%d��%d��ͬλ����Ϊ%d\n", num1, num2, count);
//	printf("%d��%d��ͬλ����Ϊ%d\n", num1, num2, count1);
//	return 0;
//}

//
//	   5.д�����ܽ�C���Բ��������������ӷ����ң�������Ⱥ�




//int main()
//{
//	int year = 0;
//	int count = 0;
//	for(year=1000; year<=2000; year++)
//	{
//		//�ж�����
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
//		//��ӡһ��
//		int j = 0;
//		for(j=1; j<=i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i*j);
//		}
//		//����
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
//			//�ж�i�Ƿ�Ϊ����
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
//			//�ж�i�Ƿ�Ϊ����
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
//			//�ж�i�Ƿ�Ϊ����
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

//1��ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ����
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
//2��ʹ�ú���ʵ���������Ľ�����
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
//3��ʵ��һ�������ж��������ǲ������ꡣ
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
//		printf("������\n");
//	else
//		printf("��������\n");
//	system("pause");
//	return 0;
//}
//4������һ�����飬ʵ�ֺ���Init��������ʼ��һ������
//   ʵ��Empty������������飬ʵ��Reverse�������������Ԫ�����á�
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
//5��ʵ�ֺ����ж�һ�����ǲ���������
//1.�ݹ�ͷǵݹ�ֱ�ʵ�ֵ�n��쳲�������.
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
//2.��дһ������ʵ��n^k.ʹ�õݹ�ʵ��.
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
//3.дһ���ݹ麯��DigitSum(n),����һ���Ǹ�����,���������������֮��.
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
//4.��дһ������reverse_string(char*string)(�ݹ�ʵ��)
   //ʵ��:�������ַ����е��ַ���������
   //Ҫ��:����ʹ��c�������е��ַ�����������
//5.�ݹ�ͷǵݹ�ֱ�ʵ��strlen
//6.�ݹ�ͷǵݹ�ֱ�ʵ��n�Ľ׳�
//7.�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ
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
