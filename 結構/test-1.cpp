#include <iostream>
using namespace std;
int main(){
	int i, sum = 0; 
	int en[5];
	
	struct exam {
		string test;
		int ans;
		int score;
	};
	cout << "請依序作答：" << endl;
	
	struct exam ex[5] = {
	{"1 + 1 = ?", 2,18},
	{"5 % 3 = ?", 2,18}, 
	{"2 * 0 = ?", 0,18}, 
	{"8 / 4 = ?", 2,23}, 
	{"3 - 1 = ?", 2,23}
	};
	
	for(i = 0; i < 5; i++){
		cout << ex[i].test << endl;	
		cin >> en[i];
		
		if(en[i] == ex[i].ans){
			sum += ex[i].score;
		}
	}
	if(sum == 59){
		sum = 60; 
	}
	cout << "得分：" << sum; 
	
	return 1;
}


