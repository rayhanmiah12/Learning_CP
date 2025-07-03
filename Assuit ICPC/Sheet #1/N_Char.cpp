#include<bits/stdc++.h>
using namespace std;

int main(){
    char ch;
    cin >> ch;

    if(ch >= 'A' and ch <= 'Z')
    cout << (char) tolower(ch) << endl;

    else cout << (char)toupper(ch) << endl;
    return 0;
}