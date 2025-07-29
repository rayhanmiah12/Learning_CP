#include <iostream>
using namespace std;
int main() {
    int x;
    cin >> x;
    int rem, temp = x, sum = 0;
    while(temp !=0)
    {
        rem = temp % 10;
        sum = sum * 10 + rem;
        temp = temp / 10;
    }
    cout << sum << endl;
    if(sum == x)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}