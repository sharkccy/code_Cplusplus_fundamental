#include <iostream>
using namespace std;
int main(){
	int pen, buy, pay, out;
	int m500,m100,m50,m10,m5;
	
	cout << "原子筆(23/NT)，請輸入購買數量：" << endl;
	cin >> pen;
	buy = 23 * pen;
	cout << "購買金額 = " << buy << endl;
	cout << "請輸入付款金額：";
	cin >> pay;
	out = pay - buy;
	if(out < 0){
		cout<<"付款金額不足!!" ; 
	}
	else{
	    cout << "應找金額 = " << out << endl;
	    m500 = out/500 ;
	    out = out % 500 ;
	    cout <<"500 * "<<m500<<endl ;
	    m100 = out/100 ;
	    out = out % 100 ;
	    cout <<"100 * "<<m100<<endl ;
	    m50 = out/50 ;
	    out = out % 50 ;
	    cout <<"50 * "<<m50<<endl ;
	    m10 = out/10 ;
	    out = out % 10 ;
	    cout <<"10 * "<<m10<<endl ;
	    m5 = out/5 ;
	    out = out % 5 ;
	    cout <<"5 * "<<m5<<endl ;
	    cout <<"1 * "<<out<<endl ;
}
	
	return 1;
}


