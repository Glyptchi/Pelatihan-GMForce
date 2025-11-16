#include <bits/stdc++.h>
using namespace std;

int gcd(int x, int y){

    if(y == 0){
        return x;
    }else{
        return gcd(y, x%y);
    }

}

int lcm(int x, int y){

    return (x*y)/gcd(x,y);

}

int main(){

    int n, m; cin >> n >> m;

    cout << "GCD: " << gcd(n, m) << "\n";
    cout << "LCM: " << lcm(n, m) << "\n";

}