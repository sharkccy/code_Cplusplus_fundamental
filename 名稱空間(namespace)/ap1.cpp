#include <iostream>
using namespace std;
namespace my {
	int no = 5;
}
namespace you {
	int no = 7;
}
int no = 6;
int main(){
	
	cout<<no;
	
	cout<<my::no;
	
	cout<<you::no;

	return 1;
}

