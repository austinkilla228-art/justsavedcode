#include <iostream>
#include <fstream>
#include <cmath>
#include <iomanip>

using namespace std;

// Функция для вычисления f(x) с заданной точностью (рекуррентный метод)
double calculate_f(double x, double eps = 1e-6) {
    double sum = 0.0;
    double term;
    int k = 0;
    
    // Первый член ряда (k=0)
    term = pow(x / 2.0, 2) / 1.0;  // 1.0 = (1!)^2 = 1
    sum += term;
    k++;
    
    // Последующие члены ряда вычисляем рекуррентно
    while (fabs(term) > eps && k < 1000) {
        // a_k = a_{k-1} * [-x^2 / (4 * k^2)]
        term = term * (-x * x) / (4.0 * k * k);
        sum += term;
        k++;
    }
    
    return sum;
}

int main() {
    double a, b;
    int N;
    
    // Ввод данных
    cout << "Введите начало интервала a: ";
    cin >> a;
    cout << "Введите конец интервала b: ";
    cin >> b;
    cout << "Введите количество шагов N: ";
    cin >> N;
    
    // Проверка корректности ввода
    if (N <= 0) {
        cout << "Ошибка: N должно быть натуральным числом!" << endl;
        return 1;
    }
    
    if (a > b) {
        cout << "Ошибка: a должно быть меньше или равно b!" << endl;
        return 1;
    }
    
    // Вычисление шага
    double h = (b - a) / N;
    
    // Открытие файла для записи
    ofstream outfile("function_table.txt");
    if (!outfile) {
        cout << "Ошибка при открытии файла!" << endl;
        return 1;
    }
    
    // Заголовок таблицы в файл
    outfile << "Таблица значений функции f(x)" << endl;
    outfile << "f(x) = sum(k=0 to ∞) [(-1)^k / ((k+1)!)^2] * (x/2)^(2(k+1))" << endl;
    outfile << "Интервал: [" << a << ", " << b << "]" << endl;
    outfile << "Количество шагов: " << N << endl;
    outfile << "Шаг: " << h << endl;
    outfile << "Точность: 1e-6" << endl;
    outfile << string(60, '-') << endl;
    outfile << setw(15) << "x" << setw(25) << "f(x)" << endl;
    outfile << string(60, '-') << endl;
    
    // Вывод в консоль
    cout << "\nТаблица значений функции f(x)" << endl;
    cout << "f(x) = sum(k=0 to ∞) [(-1)^k / ((k+1)!)^2] * (x/2)^(2(k+1))" << endl;
    cout << "Интервал: [" << a << ", " << b << "]" << endl;
    cout << "Количество шагов: " << N << endl;
    cout << "Шаг: " << h << endl;
    cout << "Точность: 1e-6" << endl;
    cout << string(60, '-') << endl;
    cout << setw(15) << "x" << setw(25) << "f(x)" << endl;
    cout << string(60, '-') << endl;
    
    // Вычисление и вывод значений функции
    cout << fixed << setprecision(6);
    outfile << fixed << setprecision(6);
    
    for (int i = 0; i <= N; i++) {
        double x = a + i * h;
        double fx = calculate_f(x);
        
        // Запись в файл
        outfile << setw(15) << x << setw(25) << fx << endl;
        
        // Вывод в консоль
        cout << setw(15) << x << setw(25) << fx << endl;
    }
    
    outfile.close();
    cout << "\nРезультаты сохранены в файл 'function_table.txt'" << endl;
    
    return 0;
}
