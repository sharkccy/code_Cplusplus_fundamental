#include <iostream>
void round(float);
using namespace std;
int main(){
	
	round(3.4);
	round(3.6);
	return 1;
}

void round(float n){
	int a = (int)n;  // 強制將n轉成整數(去除小數)	
	float b = n - a;  // 小數部分 
	
	if(b >= 0.5) 
		cout << a + 1 << endl;
	else
		cout << a << endl;	
}

