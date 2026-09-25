#include <iostream>


using namespace std;

int main()
{

	double price;
	double percent;
	cout << "Введите цену товара: \n";
	cin >> price;
	cout << "Введите процент скидки: \n";
	cin >> percent;
	double discount = (price * percent) / 100;
	double finalPrice = price - discount;
	cout << "Размер скидки:" << discount << "\n";
	cout << "Цена после скидки:" << finalPrice << "\n";


	return 0;
}