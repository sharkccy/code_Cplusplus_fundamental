#include <iostream>
void func();
using namespace std;
 
int a = 10;  // 全域變數 

int main(){	
	cout << "呼叫func()前, a = " << a << endl;	
	func();	
	cout << "呼叫func()後, a = " << a << endl;

    return 1;
}


void func(){
	a = 30;  //更改了全域變數 
	cout << "func()裡, a = " << a << endl;	
}


