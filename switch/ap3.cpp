#include <iostream>
using namespace std;
int main(){
	string id ;
	cout << "�п�J�����Ҹ��X:" <<endl ;
	cin >> id ; 
	char ch1 = id[0] ; // ���X�����Ҫ��^��r��
	char ch2 = id[1] ; // ���X�����Ҫ���1�ӼƦr 
	switch(ch1){
		case'A':
		case'a':
			cout<<"�x�_��" ; 
			break ;
		case'B':
		case'b':
			cout<<"�x����" ; 
			break ;
		case'C':
		case'c':
			cout<<"�򶩥�" ; 
			break ;
		case'D':
		case'd':
			cout<<"�x�n��" ; 
			break ;
		default:
			cout<<"��L����" ; 
	}
	if(ch2 == '1'){
		cout << "�k��" ;
	}
	else{
		cout << "�k��" ; 
	}

	return 1;
}

