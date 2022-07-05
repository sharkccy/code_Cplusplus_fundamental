#include <iostream>
using namespace std;
void sum(int n){
	int i, total = 0;
	for(i = 1; i <= n; i++){
		total = total + i;
	}
	cout << total << endl;
}

void fact(int n){
	int i, total = 1;
	for(i = 1; i <= n; i++){
		total = total * i;
	}
	cout << total << endl;
}

void powN(int m, int n){
	int i, total = 1;
	for(i = 1; i <= n; i++){
		total = total * m;
	}
	cout << total << endl;
}
