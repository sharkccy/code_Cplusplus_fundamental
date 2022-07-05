#include <iostream>
using namespace std;
int main(){
    int math ;
	cout <<"請輸入數學成績" ;
	cin >> math ;
	if(math >=80){
		cout <<"level A";
	}
	else if(math >=60)
	    cout <<"level B";
	else if(math >=50)
	    cout <<"請參加補考";
	else 
	    cout <<"重修!";
    
	return 1;
}

