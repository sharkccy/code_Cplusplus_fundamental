#include <iostream>
using namespace std;
int main(){
    int no ;
    cout <<"�п�J�@�Ӽƭ�" << endl ;
    cin >> no ;
	switch(no){
		case 1 :
		case 2 :
		case 3 :
			cout << "���w" ; 
			break;
		case 4 :
		case 5 :
			cout << "�Ȧw" ;
			break;
		case 6 :
		case 7 :
			cout << "�ߦw" ;
			break;
		default:
			cout << "�A��" ; 
	} 
	return 1;
}

