#include <iostream>
using namespace std;
int main(){
	int a = 4, b = 6;
	 
	// === ¥æ´«µ{¦¡½X ==== 
	
	int tmp = a;  // tmp=4
	a = b;        // a=6
	b = tmp;      // b=4
	
	// ====================
	
	cout << a << ", " << b;
	
	return 1;
}

