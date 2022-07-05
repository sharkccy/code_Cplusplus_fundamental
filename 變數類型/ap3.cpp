#include <iostream>

void func();
using namespace std;

int a = 5;

int main(){

	func();			
    func();		
    func();	
    
	cout << "In main(), a = " << a << endl;  
    
    return 1;
}

void func(){    
   int a = 10;
   cout << a << endl;   
   a += 20;
}



