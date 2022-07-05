#include <iostream>
using namespace std;
int main(){
	int n;
	int sum = 0; 
	
	cout << "請輸入數值：" << endl;
	cin >> n;
	int n2 = n ;
	
	while(n != 0){
		n = n/10 ;
		sum++;
	}
		cout<<n2<<"是"<<sum<<"位數";
	return 1;
}
