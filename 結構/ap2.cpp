#include <iostream>
using namespace std;
int main(){
	struct std { // ���c 
		int id;
		char name[10];  // �r���}�C (�r��)
	};
	
	struct std s[2] = {{11, "allen"}, {22, "benson"}};  // ���c�}�C //std �����c�W�١As���}�C�W��(�ܼ�) 
	 
	cout << "Id: " << s[1].id << endl; 
	cout << "Name: " << s[1].name << endl;
	
	return 1;
}


