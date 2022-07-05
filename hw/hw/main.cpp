#include <iostream>
using namespace std;
int main(){
    string s;
    int len = s.length();
    int i,n,j=0;
    cout << "請輸入字串：";  // 例如：2a3b => aabbb
    cin >> s;
    for(i = 0;i <= len/2; i += 2 ){
        for(n = 0 ; n < s[j]; n++){
            cout<<s[j+1];
        }
        j = j + 2;
    }
    cout<<endl;
    return 1;
}
