#include <iostream>
using namespace std;
int main(){
	
	int no1,no2, no3 ;
	int max ;
	
	cout <<"�п�J�Ĥ@�ӼƦr:";
	
	cin >> no1 ;
	
	cout <<"�п�J�ĤG�ӼƦr:"; 
	
	cin >> no2 ;
	
	cout <<"�п�J�ĤT�ӼƦr:";
	
	cin >> no3 ;
	
	if(no1 > no2){
		max = no1 ;
	}
	else{
		max = no2 ;
	}
	
	if (no3 > max) 
	    max = no3 ;
	
	cout << max ;
	
	
	 
	
	
	

	return 1;
}

