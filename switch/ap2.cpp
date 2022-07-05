#include <iostream>
using namespace std;
int main(){
    int no ;
    cout <<"請輸入一個數值" << endl ;
    cin >> no ;
	switch(no){
		case 1 :
		case 2 :
		case 3 :
			cout << "早安" ; 
			break;
		case 4 :
		case 5 :
			cout << "午安" ;
			break;
		case 6 :
		case 7 :
			cout << "晚安" ;
			break;
		default:
			cout << "再見" ; 
	} 
	return 1;
}

