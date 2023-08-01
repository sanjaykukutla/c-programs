#include <iostream>
using namespace std;
int main(){
int a;
cin >> a;
while(a--){
    string s;
    cin >> s;
    int n = s.size();
    if(n>10){
        int sp = n-2;
        cout << s[0]<<sp<<s[n-1] <<endl;
    }else{
        cout << s <<endl;
    }
}
}