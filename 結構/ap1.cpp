#include <iostream>
using namespace std;
int main(){
	struct std { // ���c 
		int id;
		char name[10];  // �r���}�C (�r��)
		char mail[20];
	};
	
	struct std s1 = {101, "amy", "amy@msn.com"};
	 
	cout << "Name: " << s1.name << endl; 
	cout << "Mail: " << s1.mail << endl;
	
	return 1;
}


