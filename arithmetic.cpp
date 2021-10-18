#include<iostream>
using namespace std;
void add(int a, int b){
    cout<<"Add: "<<a+b<<endl;
}
void sub(int a, int b){
    cout<<"Sub:"<<a-b<<endl;
}void mul(int a, int b){
    cout<<"Mul: "<<a*b<<endl;
}
void divison(int a, int b){
    cout<<"Div: "<<a/b<<endl;
}
void rem(int a, int b){
    cout<<"Remainder: "<<a%b<<endl;
}
int main(){
    int x,y =0;
    cin>>x>>y;
    add(x,y);
    sub(x,y);
    mul(x,y);
    divison(x,y);
    rem(x,y);
    return 0;
}