#include <iostream>
void func();
using namespace std;
 
int a = 10;  // 办跑计 

int main(){	
	cout << "㊣func()玡, a = " << a << endl;	
	func();	
	cout << "㊣func(), a = " << a << endl;

    return 1;
}


void func(){
	a = 30;  //э办跑计 
	cout << "func()柑, a = " << a << endl;	
}


