#include <iostream>
using namespace std;
int main(){
	int no ;
    int i ;
    int sum = 0 ;
    cout<<"請輸入一個數值:"<< endl ;
    cin>>no ;
    for(i =1 ; i <= no; i++ ){
    	sum+=i;
	}
	cout << sum ;
	return 1;
}

