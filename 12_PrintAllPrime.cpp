#include<iostream>
using namespace std;
bool prime(int n){
    for(int i = 2; i<n ; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}
void printallprime(int n){
     for(int i = 2; i<=n ; i++){
        if( prime(i)){ // agar i prime hai toh print kardo
        cout << i << "  ";

        }
}
cout << endl;
}
int main(){
    int n;
    cin >> n;
    printallprime(n);
    return 0;
}