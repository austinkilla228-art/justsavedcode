#include <iostream>

using namespace std;

int main() {
    const int N = 5;
    double A[N][N];  // Квадратная матрица 5x5
    double B[N];     // Вектор длиной 5

    // Заполнение матрицы A
     cout << "Введите элементы матрицы 5x5:\n";
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
             cin >> A[i][j];
        }
    }

    // Построение вектора B
    for (int i = 0; i < N; ++i) {
        bool hasNegative = false;
        bool hasZero = false;

        for (int j = 0; j < N; ++j) {
            if (A[i][j] < 0) {
                hasNegative = true;
                break;  // Если нашли отрицательный элемент, выходим из цикла
            }
            if (A[i][j] == 0) {
                hasZero = true;
            }
        }

        if (hasNegative) {
            B[i] = -1;  // Если есть отрицательный элемент
        } else if (hasZero) {
            B[i] = 0;   // Если есть нулевой элемент
        } else {
            B[i] = 1;   // Все элементы положительные
        }
    }

    // Вывод вектора B
     cout << "Вектор B:\n";
    for (int i = 0; i < N; ++i) {
         cout << B[i] << " ";
    }
     cout <<  endl;

    return 0;
}

