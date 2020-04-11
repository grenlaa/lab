// лаба 1 передел.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
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
//2
class HeatPowerTools: public powerTools {
public:
	int temperature;

};
//3
class buildingHairDryer: public HeatPowerTools {
public:
	string additional_items;//дополнительные элементы(Индикатор температуры, Защита от перегрева, Регулятор мощности и т.п.)
	string use;
	int heating_of_air_mass;

};
//3
class HotGlueGun : public HeatPowerTools {
public:
	int diameter_glue_of_stick;

};
//3
template <class T>
class SolderingIron : public HeatPowerTools {
public:
	T heating_time;//время нагрева
	string heating_principle;//принцип нагрева(Нихромовые, керамические, индукционные, импульсные)
private:
	int i = rand() % 5 + 3;
	

};
//4
template <class T>
class ArcSolderingIron : public  SolderingIron <T>{
	
};
//4
template <class T>
class HammerSolderingIrons : public  SolderingIron <T> {

};

int main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));
	HammerSolderingIrons <int> d;
	cin >> d.name;
	cout<<d.name;

	system("pause");
	return 0;
}