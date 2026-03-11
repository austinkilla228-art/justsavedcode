#include <iostream>
using namespace std;
int main() {
    int m, n;

    // Ввод размерности матрицы
     cout << "Введите количество строк m: ";
     cin >> m;
     cout << "Введите количество столбцов n: ";
     cin >> n;

    // Создание динамической матрицы A размером m x n
    double** A = new double*[m];
    for (int i = 0; i < m; ++i) {
        A[i] = new double[n];
    }

    // Ввод элементов матрицы A
     cout << "Введите элементы матрицы A:\n";
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
             cin >> A[i][j];
        }
    }

    // Массив для хранения максимальных элементов каждой строки
    double* X = new double[m];

    // Находим максимальные элементы X_i для каждой строки
    for (int i = 0; i < m; ++i) {
        X[i] = A[i][0]; // Инициализируем максимальный элемент первой ячейкой
        for (int j = 1; j < n; ++j) {
            if (A[i][j] > X[i]) {
                X[i] = A[i][j]; // Обновляем максимальный элемент
            }
        }
    }

    // Вычисление y
    double y = 0;
    for (int i = 0; i < m; ++i) {
        y += X[i] * X[m - 1 - i]; // Сумма по формуле
    }

    // Вывод результата
     cout << "Результат y = " << y <<  endl;

    // Освобождение памяти
    delete[] X;
    for (int i = 0; i < m; ++i) {
        delete[] A[i];
    }
    delete[] A;

    return 0;
}

