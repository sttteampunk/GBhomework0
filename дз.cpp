
#include <iostream>

int main()
{
    using namespace std;
    setlocale(LC_ALL, "Russian");
    //задание 1
    int a, b, c;

    cout << "Введите первое число: ";
    cin >> a;
    cout << "Введите второе число: ";
    cin >> b;
    c = a + b;

    if (c >= 10 && c <= 20)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }

    //задание 2
    const int f = 8, g = 8;

    if (f == 10 && g == 10 || f + g == 10)
    {
        cout << "\ntrue";
    }
    else
    {
        cout << "\nfalse";
    }

    //задание 3
    cout << "\nваши числа: ";
    int i = 1;
    do {
        if (i % 2 != 0) {
            cout << i << ", ";
        }
        i++;
    } while (i <= 50);

    //задание 4
    bool chisla = true;
    int q;
    cout << "\nввидите число(опять): ";
    cin >> q;

    for (int i = 2; i <= q / 2; i++)
    {
        if (q % i == 0)
        {
            chisla = false;
            break;
        }
    }
    if ((chisla) && (q > 1))cout << "ПРОСТОЕ ЧИСЛОООООООО " << endl;
    else cout << "СЛИЖКОМ СЛОЖНОЕ ЧИСЛО " << endl;

    //задание 5
    int t;
    cout << "введите год (до 3000): ";
    cin >> t;
    if (t > 0 && t <= 3000)
    {
        if ((t % 4 == 0 && t % 100 != 0) || t % 400 == 0)
        {
            cout << "год високосный";
        }
        else
        {
            cout << "год не високосный";
        }
    }
    return 0;
}