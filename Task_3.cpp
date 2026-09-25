/*Считать возраст и обычную цену билета. 
Отрицательный возраст — ошибка; до 7 лет цена 0; 7–17 — половина; 18+ — полная цена.
*/

#include <iostream>
using namespace std;

int main()
{
    int age;
    double price;
    double finalPrice;
    cout << "Введите обычную цену билета: \n";
    cin >> price;
    cout << "Введите возраст: \n";
    cin >> age;
    if (age >= 0) {
        if (age < 7) finalPrice = 0;
        else if (age < 17) finalPrice = price / 2;
        else finalPrice = price;
        cout << "Конечная цена: " << finalPrice;

    }
    else cout << "Ошибка: возраст не может быть отрицательным \n";
   
}