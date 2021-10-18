//
//  main.cpp
//  c++ xcode
//
//  Created by Shivani Verma on 18/10/21.
//

#include <iostream>
using namespace std;

void swap (int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    //printf("In func, a = %d b = %d\n", a, b);
    //cout<<"In func, a = "<<*a<<" and b = "<<*b<<endl;
}
int main() {
    //int x = 5, y = 7;
    int x,y =0;
    cin>>x>>y;
    cout<<"before swap, x = "<<x<<" y = "<<y<<endl;
    swap(&x, &y);
    //&x = x ka address
    //*&x= x ka value
    //int *a = &x -> a is pointer pointing to x
    //printf("In main, x = %d y = %d\n", x, y);
    cout<<"After swap, x = "<<x<<" y = "<<y<<endl;
    return 0;
    
}
