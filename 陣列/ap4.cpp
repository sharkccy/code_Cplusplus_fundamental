#include <iostream>
using namespace std;
int main(){
	int m[5] = {1, 3, 5, 7, 9};
	int i;
	int mid = 5 / 2;
	
	for(i = 0; i < mid; i++){
		int tmp = m[i];
		m[i] = m[4-i];
		m[4-i] = tmp;
	}
	
	
	for(i = 0; i < 5; i++){
		cout << m[i] << "  ";
	}
	return 1;
}

