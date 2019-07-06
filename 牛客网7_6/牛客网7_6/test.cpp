#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	while (getline(cin,str))
	{
		string mima = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	    string orign = "VWXYZABCDEFGHIJKLMNOPQRSTU";

		for (size_t i = 0; i < str.size(); ++i)
		{
			for (size_t j = 0; j < mima.size(); ++j)
			{
				if (str[i] == mima[j])
				{
					str[i] = orign[j];
					
				}
			}
		}
		cout << str << endl;
	}
	return 0;
}



//求一个数因子的个数
//#include <iostream>
//#include <cmath>
//
//using namespace std;
//int main(){
//	int n, k, i;
//	while (cin >> n){
//		k = 0;
//		for (i = 2; i <= sqrt(n); i++)
//		if (n%i == 0){
//			while (n%i == 0)
//				n = n / i;
//			k++;
//		}
//		if (n != 1)k++;
//		cout << k << endl;
//	}
//	return 0;
//}