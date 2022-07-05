#include <iostream>
using namespace std;
int main(){
    
    int i, j;
    int m = 0 ;
    
    for(i = 1; i <= 4; i++){
        for(j = 0; j <= 4-i ;j++){
            cout<<" " ;
        }
        for(j = 1; j <=i+m; j++){
            cout << "*";
        }
        for(j = 0; j <= 4-i ;j++){
            cout<<" " ;
        }
        cout << endl;
        m++ ;
    }
    
    
    return 1;
}



