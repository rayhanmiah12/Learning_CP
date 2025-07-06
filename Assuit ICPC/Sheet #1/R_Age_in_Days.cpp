#include<iostream>
using namespace std;

int main(){
    int y,m,d,n;
    cin >> n;

    y = n / 365;
    n %= 365;
    m = n / 30;
    n %= 30;
    d = n;
    
    cout << y << " years" << endl;
    cout << m << " months" << endl;
    cout << d << " days" << endl;
    return 0;
}