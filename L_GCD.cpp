#include<iostream>
using namespace std;
int main()
{
    int a, b, rem, gcd; 
    cin >> a >> b;
    while (b!=0){
        rem = a%b;
        a = b;
        b = rem;
    }
    gcd = a;
    cout << gcd << endl;
    return 0;
}
