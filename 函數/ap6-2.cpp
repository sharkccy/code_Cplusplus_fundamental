#include <iostream>
using namespace std;
int main(){
	int i, j, n;
	cin >> n;
	int n2 = n;
	
	for(i = 1; i <= n; i++){
		for(j = 1; j <= i; j++){
			cout << i << "\t";
			n2--;
			if(n2 == 0)    //�۵��n��   ==  !!!!! 
				return 1;
		}
		cout << endl;
	}
	return 1;
}


