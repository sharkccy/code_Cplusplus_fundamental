#include <iostream>
void round(float);
using namespace std;
int main(){
	
	round(3.4);
	round(3.6);
	return 1;
}

void round(float n){
	int a = (int)n;  // 眏盢n锣Θ俱计(埃计)	
	float b = n - a;  // 计场だ 
	
	if(b >= 0.5) 
		cout << a + 1 << endl;
	else
		cout << a << endl;	
}

