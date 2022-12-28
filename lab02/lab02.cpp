

#include <iostream>
using namespace std;
#include "ex_4.h"

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

//3.10
int for_ex3_10(int x=1)
{
    if (x <= 0)
    {
        return 0;
    }
    else
    {
        int for_sum_1 = 0;
        for (int i = 0; i <= x; i++)
        {
            for_sum_1 += i;
        }
        return for_sum_1;
    }

}

void for_ex3_12(int first_value, int second_value, int& first_link, int& second_link)
{
    first_link = first_value + second_value;
    second_link = first_value * second_value;
}

void ex_3()
{
    //3.1
    int array_1[2][3];
    cout << "Созданный массив:\n";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            int for_array_number = rand();
            array_1[i][j] = for_array_number;
            cout << array_1[i][j] << " ";
        }
        cout << "\n";
    }

    //3.2
    int for_sum_1 = 0;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for_sum_1 += array_1[i][j];
        }
    }
    cout << "Сумма чисел созданного массива: " << for_sum_1 << "\n";

    //3.3
    int array_2[3];

    //3.4
    for (int j = 0; j < 3; j++)
    {
        int for_sum_2 = 0;
        for (int i = 0; i < 2; i++)
        {
            for_sum_2 += array_1[i][j];
        }
        array_2[j] = for_sum_2;
    }

    //3.5
    cout << "Новый массив:\n";
    for (int i = 0; i < 3; i++)
    {
        cout << array_2[i] << " ";
    }
    cout << "\n";

    //3.6
    float some_x = 20.84;

    //3.7
    float& some_y = some_x;
    float& some_z = some_x;

    //3.8
    some_y = 13.12;

    //3.9
    cout << "Переменная: " << some_x << "\n" << "Другая ссылка: " << some_y << "\n";

    //3.11
    cout << "Проверка работа функции: " << for_ex3_10() << "\n";

    //3.14
    int first_value = 12;
    int& first_link = first_value;
    int second_value = 15;
    int& second_link = second_value;
    cout << "Первая переменная: " << first_value << "\n" << "Вторая переменная: " << second_value << "\n";
    cout << "Вызываю функцию для изменения значения ссылок на переменные\n";
    for_ex3_12(first_value, second_value, first_link, second_link);
    cout << "Первая переменная: " << first_value << "\n" << "Вторая переменная: " << second_value << "\n";
}


void ex_4_1()
{
#define count_of_sum(x, y) x+y
    for (int i = 0; i < 3; i++)
    {
        cout << "Вызываю функцию с параметром '2'\n";
        ex_4(2);
    }

}





void make_choise()
{
    int exercise;

    cout << "\nВведите номер задания для проверки\n";
    cout << "Для выхода введите 0\n";
    cin >> exercise;
    cout << "Выбрано задание " << exercise << "/4\n";

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
    else if (exercise == 3)
    {
        ex_3();
        make_choise();
    }
    else if (exercise == 4)
    {
        ex_4_1();
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