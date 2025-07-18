#include <iostream>
#include <cmath>  // for floor, ceil, round
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    double result = static_cast<double>(A) / B;

    cout << "floor " << A << " / " << B << " = " << floor(result) << endl;
    cout << "ceil " << A << " / " << B << " = " << ceil(result) << endl;
    cout << "round " << A << " / " << B << " = " << round(result) << endl;

    return 0;
}
