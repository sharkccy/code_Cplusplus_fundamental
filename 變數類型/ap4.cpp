#include <iostream>

void func();
using namespace std;

int main(){

	func();			
    func();		
    func();	
	
	//cout<< a ;  ���B�|�X���A�R�A�ܼƥu�b��Ƥ�����    
    return 1;
}

void func(){    
   static int a = 10;  // �R�A�ܼơA�ܼƭȷ|�b�{�������~���� 
   cout << a << endl;   
   a += 20;
}



