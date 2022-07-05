#include <iostream>
using namespace std;
int main(){
	int n;
	int sum=0 ;  //用來儲存反轉後的數 
	cout << "請輸入數值：" << endl;
	cin >> n;
	int n2 = n ;
	while(n !=0 ){
		sum=sum*10+n%10 ;
		n=n/10;
		
	}
	if(sum==n2){
		cout<<"是回文!!";
	}
	else{
		cout<<"不是回文!!";
	}
	
	
	
	return 1;
}

