#include <iostream>
void func();
using namespace std;

int main(){
	int a = 10;   // 區域變數 

	cout << "呼叫func()前, a = " << a << endl;	
	
	func();	
	
	cout << "呼叫func()後, a = " << a << endl;

    return 1;
}


void func(){
	int a = 30; 
	cout << "func()裡, a = " << a << endl;	
}


