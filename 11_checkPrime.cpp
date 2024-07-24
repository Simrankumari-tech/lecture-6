#include<iostream>
using namespace std;

bool prime(int n){
    for(int i= 2; i<n ; i++){
    if ( n % i == 0){
        return false;
    }
}
return true;
}
int main(){
    if(prime(170)){
        cout << "prime\n" ;
    }
    else{
        cout << "prime nahi hai\n" ;
    }
    return 0;
}