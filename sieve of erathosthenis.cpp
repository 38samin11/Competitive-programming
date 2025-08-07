#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    int isPrime[1001];
    for (int i = 0; i <= n; i++) {
        isPrime[i] = 1;
    }

    isPrime[0] = 0;
    isPrime[1] = 0;

    for (int p = 2; p * p <= n; p++) {
        if (isPrime[p] == 1) {
            for (int i = p * p; i <= n; i += p) {
                isPrime[i] = 0;
            }
        }
    }

    cout << "Prime numbers up to " << n << ": ";
    for (int i = 2; i <= n; i++) {
        if (isPrime[i] == 1) {
            cout << i << " ";
        }
    }

    return 0;
}
