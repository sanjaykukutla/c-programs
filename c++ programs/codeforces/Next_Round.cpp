#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n,k,pass=0;
    cin >> n >> k ;
    std::vector<int> v;
    for(int i=0;i<n;i++){
        int s;
        cin >>s;
        v.push_back(s);
    }
    int in = v[k-1];
    for(int i=0;i<n;i++){
        if(v[i]>=in){
            pass++;
        }
    }
    cout << pass << endl;

}