#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <unordered_map>
//
//using namespace std;
//
//int main()
//{
//	int a[10] = { 1, 23, 4, 5, 2, 55, 12, 4, 4, 4 };
//	unordered_map<int, int> countmap;
//	for (auto e : a)
//		countmap[e]++;
//	for (auto kv : countmap)
//	{
//		if (kv.second > 4)
//			cout << kv.first << endl;
//	}
//	return 0;
//}



//�򵥵Ĵ����¼(�Լ����)
//#include <iostream>
//#include <string>
//#include <unordered_map>
//
//using namespace std;
//
//string Getfilename(string str)
//{
//	string res = "";
//	size_t pos = str.size()-1;
//	pos = str.rfind('\\', pos);
//	res = str.substr(pos + 1, str.size() - 1);
//	return res;
//}
//
//int main()
//{
//	string str;
//	int hang;
//	while (cin >> str >> hang)
//	{
//		unordered_map<string,int> um;
//		string res = Getfilename(str);
//		um.insert(make_pair(res,hang));
//
//		for (auto e : um)
//			cout << e.first << " " << e.second << " ";
//		cout << um.size() << endl;
//		
//	}
//	return 0;
//}




//�򵥵Ĵ����¼������

//�Ƚ����е��ַ��������ϣ��keyΪ�ַ�����valueΪ<����˳�򣬳��ִ���>��˳��ȡ��ͬ���ַ�������Сֵ������һֱ�ۼ�
//����Ļ�������set��д�Ƚ��������������򣬴�����ͬ�򰴳���˳������
//�����������hashʱ�临�Ӷȿ�����Ϊ��O(n)
//�������set���Ǻ������������Ϊ��O(nlgn) ,�ܵĸ��ӶȾ��������
//#include <iostream>
//#include <unordered_map>
//#include <set>
//#include <string>
//#include <stdlib.h>
//
//using namespace std;
//struct info{//��¼���ֵ�˳�򣬺ʹ���
//	int rank;
//	int count;
//	info(int rank, int count){
//		this->rank = rank;
//		this->count = count;
//	}
//};
//struct fullinfo{//һ�������Ľ�����ַ����ʹ���
//	string file;
//	int rank;
//	int count;
//	fullinfo(string file, int rank, int count){
//		this->file = file;
//		this->rank = rank;
//		this->count = count;
//	}
//};
//struct classcomp {//set�ıȽ���
//	bool operator()(const struct fullinfo& f1, const struct fullinfo& f2){
//		if (f1.count == f2.count)
//			return f1.rank<f2.rank;
//		return f1.count>f2.count;
//	}
//};
//typedef struct info INFO;
//typedef struct fullinfo FULLINFO;
//int main(){
//	unordered_map<string, INFO> record;
//	unordered_map<string, INFO>::iterator it;
//	unordered_map<string, INFO>::const_iterator itfind;
//	set<FULLINFO, classcomp> ret;
//	set<FULLINFO, classcomp>::iterator sit;
//	string linestr;//һ������
//	string file;//�ļ���+�к�
//	int pos;//�ո��λ��
//	int i = 1;
//	while(getline(cin, linestr)){
//		if (linestr.length() == 0)
//			break;
//		pos = linestr.rfind("\\");
//		file = linestr.substr(pos + 1);//��ֵõ�����filename��count
//		itfind = record.find(file);//��map�в鿴�Ƿ��Ѿ����˸��ַ�����û������룬���������1
//		if (itfind == record.end()){
//			INFO tmpi(i, 1);
//			record.insert(pair<string, INFO>(file, tmpi));
//		}
//		else{
//			INFO tmpi(itfind->second.rank, itfind->second.count + 1);
//			record.erase(file);
//			record.insert(pair<string, INFO>(file, tmpi));
//		}
//		i++;
//	}
//	for (it = record.begin(); it != record.end(); it++){
//		FULLINFO tmpfull(it->first, it->second.rank, it->second.count);//���������set����
//		ret.insert(tmpfull);
//	}
//	for (i = 0, sit = ret.begin(); sit != ret.end() && i<8; ++sit, ++i){//������8����¼��file����16λ
//		if (file.find(" ") <= 16){
//			cout << (*sit).file << " " << (*sit).count << endl;
//		}
//		else{
//			cout << (*sit).file.substr(file.find(" ") - 16) << " " << (*sit).count << endl;
//		}
//
//	}
//	return 0;
//}



//#include<iostream>
//#include<string>
//#include<vector>
//#include<map>
//#include<algorithm>
//using namespace std;
//struct ErrorLog
//{
//	string name;
//	int line; //���д��int��
//	int count;
//};
//ErrorLog CreateErrorLog(string name, int line)
//{
//	ErrorLog log;
//	int nameSize = name.length();
//	int index = -1;
//	for (int i = nameSize - 1; i >= 0; --i)
//	{
//		if (name[i] == '\\') //ע�⣡
//		{
//			index = i;
//			break;
//		}
//	}
//	name = name.substr(index + 1);
//	log.name = name;
//	log.line = line;
//	log.count = 1;
//	return log;
//}
//void RecordErrorLog(int number, ErrorLog log, vector<ErrorLog>& res)
//{
//	bool isrepeat = false;
//	for (int i = 0; i < res.size(); ++i)
//	{
//		if (res[i].name == log.name && res[i].line == log.line)
//		{
//			res[i].count++;
//			isrepeat = true;
//			break;
//		}
//	}
//	if (isrepeat == false)
//	{
//		res.push_back(log);
//	}
//}
//static bool Compare(const ErrorLog& a, const ErrorLog& b)
//{
//	return a.count>b.count;
//}
//int main()
//{
//	string name;
//	int line;
//	vector<ErrorLog> result;
//
//	int number = 8;
//	while (cin >> name >> line)
//	{
//		ErrorLog log = CreateErrorLog(name, line);
//		RecordErrorLog(number, log, result);
//	}
//	sort(result.begin(), result.end(), Compare);//��������
//	for (int i = 0; i < 8; ++i)
//	{
//		int len = result[i].name.length();
//		if (len>16)
//			result[i].name = result[i].name.substr(len - 16);
//		cout << result[i].name << " " << result[i].line << " " << result[i].count << endl;
//	}
//}