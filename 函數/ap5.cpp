#include <iostream>
using namespace std;
int pow(int n){
		return n * n;  //回傳 n * m , reture後面不會再執行 
}
int main(){
	int a = pow(3) ;
	cout<<a<<endl;
	cout<<pow(3)<<endl;
	return 1;
}

