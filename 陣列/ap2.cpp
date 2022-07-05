#include <iostream>
using namespace std;
int main(){
	int a[6] = {12,4,36,9,25,7};
	int i ;
	int sum = 0 ;
	for(i=0;i<6;i++){
	sum+=a[i] ;
	}
	cout<<"sum="<<sum<<endl ;
	cout<<"average="<<sum/6.0<<endl ;

	return 1;
}

