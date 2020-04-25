// лаба 3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <ctime>

using namespace std;


class Tools  {

public:

	int value=rand()%20-10;

	void chargerPower() 
	{
		if (value < 0 ) {
			throw value;
		}
		if (value > 1 && value < 7) {
			throw exception("неочень");
		}
		if (value >= 7 && value <=10) {
			throw "это хороший инструмент";
		}

		throw true;
	}
};

int main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));
	Tools ds;
	ds.value = 11;
	cout << "оценка инструмента =" << ds.value<<endl;
	try
	{
	ds.chargerPower();
	}
	catch (const exception& ex)
	{
		cout << "говорят что " << ex.what() << endl;
	}
	catch (const char *std)
	{
		cout << std << endl;
	}
	catch (const int &r)
	{
		cout << "исключение, такого не может быть оценка:" << r << endl;
	}
	catch (...)
	{
		cout << "что то идет не так инструмент слишком хорош" << endl;
	}
}
