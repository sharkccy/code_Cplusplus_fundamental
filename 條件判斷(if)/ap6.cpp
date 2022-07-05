#include <iostream>
using namespace std;
int main(){
	
	int no1,no2, no3 ;
	int max ;
	
	cout <<"請輸入第一個數字:";
	
	cin >> no1 ;
	
	cout <<"請輸入第二個數字:"; 
	
	cin >> no2 ;
	
	cout <<"請輸入第三個數字:";
	
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

