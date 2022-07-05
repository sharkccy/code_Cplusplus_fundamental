#include <iostream>
using namespace std;

namespace myMath {
	void abs(int n){
		if(n >= 0)
			cout << n << endl;
		else
			cout << -n << endl;
	}
}

using namespace myMath;

int main(){
	abs(-5);
	
	return 1;
}


