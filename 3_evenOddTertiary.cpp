#include<iostream>
using namespace std;
int main(){
bool ans;
int x=10;
ans= ((x % 2 == 0) ? true : false);
if(ans){
    cout << "prime hai\n";
}
else{
     cout << "prime nhi hai\n";
}

    return 0;
}