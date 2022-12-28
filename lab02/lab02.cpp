

#include <iostream>
using namespace std;


int main()
{
    int first_int, second_int;
    char operation_symbol;

    cout << "Введите первое число\n";           //1
    cin >> first_int;                           //1
    cout << "Введите второе число\n";           //1
    cin >> second_int;                          //1

    cout << "Среднее арифметическое введенных чисел равно:" << (first_int + second_int) / 2;                //2

    cout << "Введите знак операции: +, -, * или / ";            //3
    cin >> operation_symbol;                                    //4

    //5
    /*
    if (operation_symbol == "+") 
    { 
        cout << "Результат" << first_int + second_int;
    }
    else if (operation_symbol == "*")
    {
        cout << "Результат" << first_int * second_int;
    }
    else if (operation_symbol == "/")
    {
        cout << "Результат" << first_int / second_int;
    }
    else if (operation_symbol == "-")
    {
        cout << "Результат" << first_int - second_int;
    }
    else
    {
        cout << "Неправильная операция";
    }
    */


    //6
    switch (operation_symbol)
    {
    case '+':
        cout << "Результат" << first_int + second_int;
        break;
    case '*':
        cout << "Результат" << first_int * second_int;
        break;
    case '-':
        cout << "Результат" << first_int - second_int;
        break;
    case '/':
        cout << "Результат" << first_int + second_int;
        break;
    }

}
