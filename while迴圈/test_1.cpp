#include <iostream>
using namespace std;
int main(){
	int n;
	int sum = 0; 
	
	cout << "�п�J�ƭȡG" << endl;
	cin >> n;
	int n2 = n ;
	
	while(n != 0){
		n = n/10 ;
		sum++;
	}
		cout<<n2<<"�O"<<sum<<"���";
	return 1;
}
