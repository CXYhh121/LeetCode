#define _CRT_SECURE_NO_WARNINGS

//ƒÍ÷’≥ÈΩ±
//#include <iostream>
//#include <iomanip>
//
//using namespace std;
//
//int main()
//{
//	long long data[21] = {1,0,1};
//	long long fac = 2;
//	double result[21] = { 0.00, 0.00, 50.00 };
//	for (int i = 3; i <= 20; i++)
//	{
//		data[i] = (i - 1)*(data[i - 1] + data[i - 2]);
//		fac *= i;
//		result[i] = (double)data[i] / fac * 100;
//	}
//
//	int n;
//	while (cin >> n)
//	{
//		cout << fixed << setprecision(2) << result[n] << "%" << endl;
//	}
//
//	return 0;
//}


//≈£øÕÕ¯≥≠ÀÕ¡–±Ì
//#include<iostream>
//#include<string>
//using namespace std;
//int main()
//{
//	string s, res;
//	while (getline(cin, s))
//	{
//		getline(cin, res);
//		bool sta = false;
//		for (int i = 0; i < s.length(); i++)
//		{
//			string t;
//			if (s[i] == '"')
//			{
//				i++;
//				while (i<s.length() && s[i] != '"')
//				{
//					t += s[i];
//					i++;
//				}
//				if (t == res)
//				{
//					sta = true;
//					break;
//				}
//			}
//			else if (s[i] != ',')
//			{
//				while (i<s.length() && s[i] != ',')
//				{
//					t += s[i];
//					i++;
//				}
//				if (t == res)
//				{
//					sta = true;
//					break;
//				}
//			}
//		}
//		if (sta == true)
//			cout << "Ignore" << endl;
//		else
//			cout << "Important!" << endl;
//	}
//	return 0;
//}