

#include <iostream>
using namespace std;


void ex_1()
{
    int first_int, second_int;
    char operation_symbol;

    cout << "Введите первое число\n";           //1.1
    cin >> first_int;                           //1.1
    cout << "Введите второе число\n";           //1.1
    cin >> second_int;                          //1.1

    cout << "Среднее арифметическое введенных чисел равно:" << (first_int + second_int) / 2 << "\n";                //1.2

    cout << "Введите знак операции: +, -, * или / " << "\n";            //1.3
    cin >> operation_symbol;                                    //1.4

    //1.5
    /*
    if (operation_symbol == "+") 
    { 
        cout << "Результат" << first_int + second_int << "\n";
    }
    else if (operation_symbol == "*")
    {
        cout << "Результат" << first_int * second_int << "\n";
    }
    else if (operation_symbol == "/")
    {
        cout << "Результат" << first_int / second_int << "\n";
    }
    else if (operation_symbol == "-")
    {
        cout << "Результат" << first_int - second_int << "\n";
    }
    else
    {
        cout << "Неправильная операция";
    }
    */


    //1.6
    switch (operation_symbol)
    {
    case '+':
        cout << "Результат: " << first_int + second_int << "\n";
        break;
    case '*':
        cout << "Результат: " << first_int * second_int << "\n";
        break;
    case '-':
        cout << "Результат: " << first_int - second_int << "\n";
        break;
    case '/':
        cout << "Результат: " << first_int + second_int << "\n";
        break;
    }

}

void ex_2()
{
    //2.1
    int some_number = -1;
    while (some_number <= 0) 
    {
        cout << "Введите целое положительное число \n";
        cin >> some_number;
    }
    
    //2.2
    int for_sum_1 = 0;
    for (int i = 0; i <= some_number; i++)
    {
        for_sum_1 += i;
    }
    cout << "Сумма всех чисел от 1 до введенного числа равна:" << for_sum_1 << "\n";

    //2.3
    int some_array[10];
    for (int i = 0; i < 10; i++)
    {
        int for_array_number = rand();
        some_array[i] = for_array_number;
    }

    //2.4
    cout << "Созданный массив:\n";
    for (int i = 0; i < 10; i++)
    {
        cout << some_array[i] << " ";
    }
    cout << "\n";

    //2.5
    cout << "Числа, стоящие на четных позициях массива:\n";
    for (int i = 0;  i<10; i++ )
    {
        if ((i % 2) == 0) (cout << some_array[i] << " ");
        
    }
    cout << "\n";

    //2.6
    int for_sum_2 = 0;
    for (int i = 0; i < 10; i++)
    {
        if (i % 2 == 0) (for_sum_2 += some_array[i]); ;
    }
    cout << "Сумма элементов массива, стоящих на нечётных позициях:" << for_sum_2 << "\n";
}









void make_choise()
{
    int exercise;

    cout << "\nВведите номер задания для проверки\n";
    cout << "Для выхода введите 0\n";
    cin >> exercise;
    cout << "Выбрано задание " << exercise << "/2\n";

    if (exercise == 1)
    {
        ex_1();
        make_choise();
    }
    else if (exercise == 2)
    {
        ex_2();
        make_choise();
    }
    else if (exercise == 0)
    {
        cout << "Выход...";
    }
    else
    {
        cout << "\n\n Введен неправильный номер задания, попробуйте ещё раз\n";
        cout << "Для выхода введите 0\n";
        make_choise();
    }

}




int main() // главная функция
{
    setlocale(LC_ALL, "Russian"); // установление локали для вывода русского языка в консоли

    make_choise();

    return 0;
}