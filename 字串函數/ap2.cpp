#include <iostream>
using namespace std;
int main(){
	string s = "abcdefgh";
	
	cout << s.substr(3) << endl;  // 將s索引3(含)之後的字串切割出來 
	
	cout << s.substr(3, 2);  // 將s索引3(含)之後的2個字切割出來 
	return 1;
}

