#include <bits/stdc++.h>
using namespace std;
void primeInRange(int L, int H)
{
    int flag;
    for (int i = L; i <= H; i++) {
        if (i == 1 || i == 0)
            continue;
        flag = 1;
        for (int j = 2; j <= i / 2; ++j) {
            if (i % j == 0) {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
            cout << i << " ";
    }
}
int main()
{
    int L = 1;
    int H = 1000;
    primeInRange(L, H);
 
    return 0;
}