#include <iostream>
using namespace std;
int main(){
    int pwd = 123 ;
	int a ;
	int i ;
	for(i = 1 ; i <= 3 ; i++){
		cout<<"�п�J�K�X:";
		cin>> a ;
		if(pwd == a){
		cout<<"�K�X���T!";
		break ;  // �����j�� 
		} 
		else{
			cout<<"�K�X���~!"; 
		}
	}
	
	return 1;
}

