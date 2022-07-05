#include <iostream>
using namespace std;
int main(){
	struct std { // 結構 
		int id;
		char name[10];  // 字元陣列 (字串)
	};
	
	struct std s[2] = {{11, "allen"}, {22, "benson"}};  // 結構陣列 //std 為結構名稱，s為陣列名稱(變數) 
	 
	cout << "Id: " << s[1].id << endl; 
	cout << "Name: " << s[1].name << endl;
	
	return 1;
}


