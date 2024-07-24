#include<iostream>
using namespace std;

void printoddeven(int x){
    if(x % 2== 0){
        cout << "even\n";
    }
    else{
        cout << "odd\n";
    }
}
int main(){
    int n= 10;
    printoddeven(n);
    printoddeven(21);
   


    return 0;
}