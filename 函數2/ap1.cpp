#include <iostream>
void round(float);
using namespace std;
int main(){
	
	round(3.4);
	round(3.6);
	return 1;
}

void round(float n){
	int a = (int)n;  // �j��Nn�ন���(�h���p��)	
	float b = n - a;  // �p�Ƴ��� 
	
	if(b >= 0.5) 
		cout << a + 1 << endl;
	else
		cout << a << endl;	
}

