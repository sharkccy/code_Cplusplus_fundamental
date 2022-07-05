#include <iostream>
using namespace std;
int main(){
	int m[8] = {3,7,11,36,5,1,22,9};
	
	int max = m[0];
	int min = m[0];
	
	int i;
	for(i = 1; i < 8; i++){
		if(m[i] > max)
			max = m[i]; 
		
		if(m[i] < min)	
		min = m[i];
	}
	
	cout << "max = " << max << endl;
	cout << "min = " << min << endl;
	
	return 1;
}

