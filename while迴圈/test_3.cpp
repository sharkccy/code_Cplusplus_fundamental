#include <iostream>
using namespace std;
int main(){
	int n;
	int sum=0 ;
	cout << "½Ğ¿é¤J¼Æ­È¡G" << endl;
	cin >> n;
	while(n !=0 ){
		sum=sum*10+n%10 ;
		n=n/10;
		
	}
	cout<<sum ;
	
	
	return 1;
}

