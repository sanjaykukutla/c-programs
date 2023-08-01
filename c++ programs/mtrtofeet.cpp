#include <iostream>

using namespace std;

float mtf (int x){
    float feet = 3.28024*x;
    return feet;
}

int main(){
    int a;
    cin >> a;
    cout<< mtf(a)<<"feet";
}