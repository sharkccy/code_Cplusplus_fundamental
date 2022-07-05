//2ab3cd
#include <iostream>
#include <ctype.h>
using namespace std;

int main(){
	string s, s2 = "";
	cout << "請輸入：";
	cin >> s;
	int i, j, n1, n2, x = 0;
	
	for(i = 0; i < s.length(); i++){				
		if(isdigit(s[i])){	// 判斷是否是數字		
			n1 = s[i] - '0';			
			
			if(x > 0){
				for(j = 0; j < n2; j++){
					cout << s2;					
				}
				s2 = "";
				x = 0;
			}
			n2 = n1;		
			x++;						
		}
		else if(isalpha(s[i]))  	// 判斷是否是字母	 
			s2 = s2 + s[i];	
	}
	
	for(i = 0; i < n2; i++)
		cout << s2;
	
	return 1;
}


