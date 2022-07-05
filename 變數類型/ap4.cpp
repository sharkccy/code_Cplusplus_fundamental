#include <iostream>

void func();
using namespace std;

int main(){

	func();			
    func();		
    func();	
	
	//cout<< a ;  此處會出錯，靜態變數只在函數內有效    
    return 1;
}

void func(){    
   static int a = 10;  // 靜態變數，變數值會在程式結束才消失 
   cout << a << endl;   
   a += 20;
}



