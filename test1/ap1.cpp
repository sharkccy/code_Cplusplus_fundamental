#include <iostream>
#include <stdlib.h> 
using namespace std;
int main(){
	string no;
	cin >> no;
	int len = no.length();
	int i, sum1 = 0, sum2 = 0;
	
	for(i = 0; i < len; i+=2){
		sum1 += (no[i] - '0');
	}
	
	for(i = 1; i < len; i+=2){
		sum2 += (no[i] - '0');
	}

	cout << abs(sum1 - sum2);
	return 1;
}


