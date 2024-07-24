#include<iostream>
using namespace std;
void printable(int initial_value , int final_value,int step){
    int far,cel;
    far= initial_value;
    while(far<= final_value){
        cel = 5 *(far - 32)/9;
        cout << far << " " << cel << endl;
        far = far+step;
    }
}
int main(){
    printable(0,300,20);
    return 0;
}