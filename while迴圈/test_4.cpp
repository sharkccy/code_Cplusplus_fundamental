#include <iostream>
using namespace std;
int main(){
	int n;
	int sum=0 ;  //�Ψ��x�s����᪺�� 
	cout << "�п�J�ƭȡG" << endl;
	cin >> n;
	int n2 = n ;
	while(n !=0 ){
		sum=sum*10+n%10 ;
		n=n/10;
		
	}
	if(sum==n2){
		cout<<"�O�^��!!";
	}
	else{
		cout<<"���O�^��!!";
	}
	
	
	
	return 1;
}

