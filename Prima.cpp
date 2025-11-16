#include <bits/stdc++.h>
using namespace std;

bool prima[1000000];

int main(){

    fill(prima, prima+1000000, true);
    prima[0] = false;
    prima[1] = false;

    for(int i = 2; i*i < 1000000; i++){
        if(prima[i]==true){
            for(int j = i*i; j < 1000000; j += i){
                prima[j] = false;
            }
        }
    }

    int n; cin >> n;

    if(prima[n]){
        cout << n << " is a prime number.\n";
    }else{
        cout << n << " is not a prime number.\n";
    }
}