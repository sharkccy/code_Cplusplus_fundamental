#include <iostream>
void func();
using namespace std;

int main(){
	int a = 10;   // �ϰ��ܼ� 

	cout << "�I�sfunc()�e, a = " << a << endl;	
	
	func();	
	
	cout << "�I�sfunc()��, a = " << a << endl;

    return 1;
}


void func(){
	int a = 30; 
	cout << "func()��, a = " << a << endl;	
}


