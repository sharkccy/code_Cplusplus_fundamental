#include <iostream>
using namespace std;
int main(){
	string s = "abcdefgh";
	
	cout << s.substr(3) << endl;  // �Ns����3(�t)���᪺�r����ΥX�� 
	
	cout << s.substr(3, 2);  // �Ns����3(�t)���᪺2�Ӧr���ΥX�� 
	return 1;
}

