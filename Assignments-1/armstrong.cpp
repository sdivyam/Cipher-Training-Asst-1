#include <bits\stdc++.h>
using namespace std;

int main() {
    int num, originalNum, rem, res = 0;
    cout << "Enter a three-digit integer: ";
    cin >> num;
    originalNum = num;

    while (originalNum != 0) {
        rem = originalNum % 10;
        
        res += rem * rem * rem;
        originalNum /= 10;
    }

    if (res == num)
        cout << num << " is an Armstrong number.";
    else
        cout << num << " is not an Armstrong number.";

    return 0;
}