#define _CRT_SECURE_NO_WARNINGS

//�мٱ�
#include <iostream>
#include <algorithm>

using namespace std;
void tianping(long int n)
{
	for (int i = 0; i < n; ++i)
	{
		if (pow(3, i) >= n)
		{
			cout << i << endl;
			break;
		}
	}
}

int main()
{
	long int n;
	while (cin >> n)
	{
		tianping(n);;
	}
	return 0;
}


//������

#include <iostream>
#include <string>
#define ADD(x, y) ((x) + (y))
#define CMP(x, y) ((x) > (y))
int main()
{
	double a, b, c;
	while (std::cin >> a >> b >> c)
	{
		//�����߽���������������бȽ�
		if (CMP(ADD(a, b), c) && CMP(ADD(b, c), a) && CMP(ADD(a, c), b)) {
			std::cout << "Yes" << std::endl;
		}
		else {
			std::cout << "No" << std::endl;
		}	}
	return 0;
}