#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int m[12] = {4,3,4,8,5,7,5,6,6,3,8,3};
	
	sort(m, m + 12);  // 將陣列m做遞增排序
	
	int i;
	
	if(m[0] != m[1]){         // 第1筆 
		cout << m[0] << endl;
	}
	
	else if(m[10] != m[11]){  // 最後1筆 
		cout << m[11] << endl;
	}
	
	else{   // 在中間 
		for(i = 1; i < 11; i++){  // 注意索引範圍 
			if(m[i-1] != m[i] && m[i] != m[i+1]){
				cout << m[i] << endl;
			}
		}
	} 
	
	return 1;
}

