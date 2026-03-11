#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int X[10], Y[10];

    cout << "Enter X: ";
    for (int i = 0; i < 10; i++) {
        cin >> X[i];
    }

    cout << "Enter Y: ";
    for (int i = 0; i < 10; i++) {
        cin >> Y[i];
    }

    for (int i = 0; i < 10; i++) {
        int t = X[i];
        X[i] = max(X[i], Y[i]);
        Y[i] = min(t, Y[i]);
    }

    cout << "Changed X: ";
    for (int i = 0; i < 10; i++) {
        cout << X[i] << " ";
    }
    cout <<endl;

    cout << "Changed Y: ";
    for (int i = 0; i < 10; i++) {
        cout << Y[i] << " ";
    }
    cout <<endl;

    return 0;
}
