#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

//int a = 0;
//class someClass{
//	int b;
//	static int c;
//};
//int main(){
//	int d = 0;
//	someClass *p = new someClass();
//	return 0;
//}


//enum string{
//	x1,
//	x2,
//	x3 = 10,
//	x4,
//	x5,
//} x;
//
//int main()
//{
//	cout << x << endl;
//	return 0;
//}



//LeetCode67����������
//��������д���������ּ�࣬��������ָ��ֱ�ָ��a��b��ĩβ��Ȼ��ÿ��ȡ��һ���ַ���תΪ���֣�
//���޷�ȡ���ַ���0����Ȼ�����λcarry����ʼ��Ϊ0��
//�����߼���������2ȡ�༴Ϊ��ǰλ�����֣���2ȡ�̼�Ϊ��ǰ��λ��ֵ��
//�ǵ����Ҫ�ж���carry�����Ϊ1�Ļ���Ҫ�ڽ����ǰ�����һ��1��
class Solution {
public:
	string addBinary(string a, string b) {
		string res = "";
		int m = a.size() - 1, n = b.size() - 1, carry = 0;
		while (m >= 0 || n >= 0) {
			int p = m >= 0 ? a[m--] - '0' : 0;
			int q = n >= 0 ? b[n--] - '0' : 0;
			int sum = p + q + carry;
			res = to_string(sum % 2) + res;
			carry = sum / 2;
			}
		return carry == 1 ? "1" + res : res;	
		}
		
};