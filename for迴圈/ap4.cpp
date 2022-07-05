#include <iostream>
using namespace std;
int main(){
    int pwd = 123 ;
	int a ;
	int i ;
	for(i = 1 ; i <= 3 ; i++){
		cout<<"½Ð¿é¤J±K½X:";
		cin>> a ;
		if(pwd == a){
		cout<<"±K½X¥¿½T!";
		break ;  // µ²§ô°j°é 
		} 
		else{
			cout<<"±K½X¿ù»~!"; 
		}
	}
	
	return 1;
}

