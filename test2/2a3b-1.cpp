#include <iostream>
using namespace std;

int main(){
	string s;
	cout << "½Ð¿é¤J¡G";
	cin >> s;
	
	for(int i = 0; i < s.length() - 1; i += 2){
		for(int j = 0; j < s[i]- '0'; j++){
			cout << s[i+1];
		}
	}

	return 1;
}


