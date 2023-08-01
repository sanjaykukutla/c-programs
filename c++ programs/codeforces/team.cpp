#include <iostream>
using namespace std;
int main(){
int tc,ans=0;
cin >> tc;
while(tc--){
    int a,b,c;
    cin >> a >>b >> c;
    int cnt = a+b+c;
    if(cnt>=2){
        ans++;
    }
}
cout << ans << endl;
}


