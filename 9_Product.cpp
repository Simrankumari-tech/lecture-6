#include<iostream>
using namespace std;

int multiply(int a, int b){
   int ans = a* b;
   return ans;
}
int sum(int a, int b){
   return a+ b;
}
int subtract(int a, int b){
   return a- b;
}
int main(){
    int x= 13 , y=10;
    int product= multiply(x,y);
    cout <<product<< endl;
    cout << sum(12,2)<< endl;
     cout << subtract(12,2)<< endl;
    return 0;
}