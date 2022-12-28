#include <iostream>
using namespace std;

void ex_4(int value)
{
    static int static_variable = 0;
    cout << "Сумма переданного числа и статической переменной: " << value + static_variable << "\n";
    static_variable = value;
}