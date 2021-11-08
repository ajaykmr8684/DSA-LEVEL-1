#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (n == 0 || n == 1) {
            cout << "not prime" << endl;
        }
        for (int i = 2; i < sqrt(n); i++) {
            if (n % i == 0) {
                cout << "not prime" << endl;
            } else {
                cout << "prime " << endl;
            }
        }
    }
}