#define _CRT_SECURE_NO_WARNINGS


//˼·һ��һ����ⷨ
#include <iostream> 
#include <vector> 
#include <algorithm> 

using namespace std;
//����Լ���������1�ͱ����Լ��
void divisorNum(int n, vector<int> &divNum)
{
	for (int i = 2; i <= sqrt(n); i++) {
		if (n%i == 0)
		{
			divNum.push_back(i); //��ƽ����ʱ������һ����ҲҪ���� 
			if (n / i != i)
				divNum.push_back(n / i);
		}
	}	
}
int Jump(int N, int M) {
	//����ĵ����stepNum��Ĳ�������ʼNΪ1������N��NΪ1�� 
	vector<int> stepNum(M + 1, 0);
	stepNum[N] = 1;
	for (int i = N; i < M; i++)
	{//N������Լ������Ϊ�ӱ�������㿪ʼ���ߵ�����
		vector<int> divNum;
		//0��������㲻�ܵ�
		if (stepNum[i] == 0)
			continue; //����������ߵĲ���������divNum��������
		divisorNum(i, divNum);
		for (int j = 0; j < divNum.size(); j++) {
			//��λ��i�����ܵ���ĵ�Ϊ stepNum[divNum[j]+i]
			if ((divNum[j] + i) <= M && stepNum[divNum[j] + i] != 0)
				stepNum[divNum[j] + i] = min(stepNum[divNum[j] + i], stepNum[i] + 1);
			else if ((divNum[j] + i) <= M)
				stepNum[divNum[j] + i] = stepNum[i] + 1;
		}
	}
		if (stepNum[M] == 0) 
			return -1;
		else
			//��ʼ��ʱ�����һ��������Ҫ��1 
			return stepNum[M] - 1;
}
int main() 
{
	int n, m;
	cin >> n >> m;
	cout << Jump(n, m) << endl;
	return 0;	
}



//˼·������̬�滮��

#include <iostream>
#include <vector>
#include <climits>
#include <cmath>
#include <algorithm>
using namespace std;

int main(){
	int N, M;
	while (cin >> N >> M){
		vector<int> steps(M + 1, INT_MAX);
		steps[N] = 0;
		for (int i = N; i <= M; i++){
			if (steps[i] == INT_MAX){
				continue;
			}
			for (int j = 2; (j*j) <= i; j++){
				if (i%j == 0){
					if (i + j <= M){
						steps[i + j] = min(steps[i] + 1, steps[i + j]);
					}
					if (i + (i / j) <= M){
						steps[i + (i / j)] = min(steps[i] + 1, steps[i + (i / j)]);
					}

				}

			}
		}
		if (steps[M] == INT_MAX){
			steps[M] = -1;
		}
		cout << steps[M] << endl;
	}
	return 0;
}

//˼·����̰���㷨

#include <iostream>
using namespace std;

int stepSearch(int N, int M) {
	if (N > M) {
		return -1;
	}
	if (N == M) {
		return 0;
	}
	int res = 0;
	for (int i = 2; i<N; i++) {
		if (i*(N / i) == N) {
			res++;
			if (stepSearch(N + N / i, M) != -1) {
				res += stepSearch(N + N / i, M);
				return res;
			}
			else {
				res--;
			}
		}
	}
	return -1;
}

int main() {
	int N, M;
	while (cin >> N >> M) {
		cout << stepSearch(N, M) << endl;
	}
	return 0;
}