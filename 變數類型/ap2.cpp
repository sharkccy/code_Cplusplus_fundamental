#include <iostream>
void func();
using namespace std;
 
int a = 10;  // �����ܼ� 

int main(){	
	cout << "�I�sfunc()�e, a = " << a << endl;	
	func();	
	cout << "�I�sfunc()��, a = " << a << endl;

    return 1;
}


void func(){
	a = 30;  //���F�����ܼ� 
	cout << "func()��, a = " << a << endl;	
}


