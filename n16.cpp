#include <iostream>
using namespace std;

int main() {
    int n;

    // Ввод натурального числа n
     cout << "Введите натуральное число n: ";
     cin >> n;

    // Создание динамической квадратной матрицы порядка n
    double** matrix = new double*[n];
    for (int i = 0; i < n; ++i) {
        matrix[i] = new double[n];
    }

    // Заполнение матрицы по заданному правилу
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (j < i) {
                matrix[i][j] = 0; // Заполнение нулями
            } else {
                matrix[i][j] = n - (j - i); // Заполнение значениями от n до 1
            }
        }
    }

    // Вывод матрицы
     cout << "Сгенерированная матрица:\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
             cout << matrix[i][j] << " ";
        }
         cout <<  endl;
    }

    // Освобождение памяти
    for (int i = 0; i < n; ++i) {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}

