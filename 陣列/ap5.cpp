#include <iostream>
using namespace std;
int main(){
	int m[5] = {4, 1, 2, 5, 3};
	int i, j;
	
	
	// ==== ®ðªw±Æ§Çªk (bubble sort) ==== 
	for(i = 0; i < 4; i++){
		for(j = 0; j < 4-i; j++){
			if(m[j] > m[j+1]){
				int tmp = m[j];
				m[j] = m[j+1];
				m[j+1] = tmp;
			}
		}	
	}
	
	// =========== ======================
		
	for(int i = 0; i < 5; i++){
		cout << m[i] << " ";
	}
	return 1;
}

