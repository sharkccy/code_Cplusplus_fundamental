#include <iostream>
using namespace std;
int main(){
	int m[2][3] = {{1,3,5}, {2,4,6}};
	
	int i, j;
	int sum = 0;
	
	for(i=0; i<2; i++){
		for(j=0; j<3; j++){
			cout << m[i][j] << " ";
			sum += m[i][j];
		}
		cout << endl;
	}
	cout << "sum = " << sum;
	return 1;
}

