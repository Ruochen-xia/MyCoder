#include <bits/stdc++.h>
#include <windows.h>
using namespace std;
const string user = "AKCoder";
const string password = "123456";
bool Get_password(string User, string PassWord) {
	if (User == user && PassWord == password) return true;
	else return false;
}
void print(string x, char ch = '\0', int seed = 50) {
	for (auto i : x) {
		cout << i;
		Sleep(seed);
	}
	cout << ch;
}
bool input_password() {
	int password_wrong_count = 4;
	string User, PassWord;
	while (1) {
		system("cls");
//		cout << "Please input user:";
		print("Please input user:");
		cin >> User;
		print("Please input password:");
//		cout << "Please input password:";
		cin >> PassWord;
		--password_wrong_count;
		if (Get_password(User, PassWord)) {
//			cout << "OK, Password is right！" << endl; 
			print("OK, Password is right！", '\n');
			return true;
		}
//		cout << "Sorry, Password is wrong！" << endl; 
		print("Sorry, Password is wrong！", '\n');
		if (password_wrong_count <= 0) {
			return false;
		}
	}
	return false;
}
int Operator;
vector<string> ve; // 说明
void init_ve() {
	ve.emplace_back("1 : 查看当前时间"); 
} 
void now_time() {
	time_t timep;
	struct tm *p;
	time(&timep);
	p = localtime(&timep);
	printf("%d/%d/%d %02d:%02d:%02d\n", 1900 + p->tm_year, 1 + p->tm_mon, p->tm_mday, p->tm_hour, p->tm_min, p->tm_sec);
}
int main() {
//	if (!input_password()) {
//		getchar();
//		return 0;
//	}	
	init_ve();
	system("cls");
	do {
		print("sammy@webapp:~$");
		cin >> Operator;
		if (Operator == -1) {
			print("正在退出程序。。。");
			Sleep(5000);
			break;
		}
		if (Operator == 1) {
			now_time();
		} else {
			print("请不要乱输入。。。", '\n');
		}
		Sleep(1000);
	} while (1);
}

