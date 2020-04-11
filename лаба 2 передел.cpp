// лаба 2 передел.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <ctime>
#include <string>


using namespace std;
//1
class powerTools {
public:
	string name;
	//int weight;
	//int year_of_creat;
	int power_consumption;//потребляемая мощность
	int size;
	string creator;//производитель
	string work_with_materials;// с каким маттериалом работает инструмент
};

class HeatPowerTools  {
public:
	int temperature;

};

class buildingHairDryer  {
public:
	string additional_items;//дополнительные элементы(Индикатор температуры, Защита от перегрева, Регулятор мощности и т.п.)
	string use;
	int heating_of_air_mass;

};

class HotGlueGun  {
public:
	int diameter_glue_of_stick;

};

template <class T>
class SolderingIron  {
public:
	T heating_time;//время нагрева
	string heating_principle;//принцип нагрева(Нихромовые, керамические, индукционные, импульсные)
private:
	int i = rand() % 5 + 3;


};

//множественное наследование
template <class T>
class ArcSolderingIron : public  SolderingIron <T>, public HeatPowerTools, public powerTools {

};

template <class T>
class HammerSolderingIrons : public  SolderingIron <T>, public HeatPowerTools, public powerTools {

};

int main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));
	HammerSolderingIrons <int> d;
	cin >> d.name;
	cout << d.name;

	system("pause");
	return 0;
}