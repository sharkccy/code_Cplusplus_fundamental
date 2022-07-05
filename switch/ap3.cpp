#include <iostream>
using namespace std;
int main(){
	string id ;
	cout << "請輸入身分證號碼:" <<endl ;
	cin >> id ; 
	char ch1 = id[0] ; // 取出身分證的英文字母
	char ch2 = id[1] ; // 取出身分證的第1個數字 
	switch(ch1){
		case'A':
		case'a':
			cout<<"台北市" ; 
			break ;
		case'B':
		case'b':
			cout<<"台中市" ; 
			break ;
		case'C':
		case'c':
			cout<<"基隆市" ; 
			break ;
		case'D':
		case'd':
			cout<<"台南市" ; 
			break ;
		default:
			cout<<"其他縣市" ; 
	}
	if(ch2 == '1'){
		cout << "男性" ;
	}
	else{
		cout << "女性" ; 
	}

	return 1;
}

