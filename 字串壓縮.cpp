#include <iostream>
using namespace std;
int main(){
	string s;
	cout << "½Ð¿é¤J¦r¦ê¡G";
	cin >> s;
	int len = s.length();
	int no = 1;
	int i ;
	for(i = 0; i < len-1; i++){
		if(s[i] == s[i+1]){
			no++;
		}
		else{
			cout<< no << s[i];
			no = 1;
		}
	}
	cout<< no << s[i];
	
	return 1;
}


