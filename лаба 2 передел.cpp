// лаба 2 передел.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <ctime>
#include <string>


using namespace std;
//1

class fun {
	virtual void work() = 0;
	virtual void chargerPower() = 0;
	virtual void whole() = 0;

};
//1
class powerTools : public fun {
protected:
	string Name;
	string Creator;
	string Work_with_materials;
	int power_consumption;
public:
	powerTools(string name, string creator, string work_with_materials, int power_consumption) {
		Name = name;
		Creator = creator;
		Work_with_materials = work_with_materials;
		this->power_consumption = power_consumption;
	}
	void work() override
	{
		cout << "ne yveren";
	}

	void chargerPower() override
	{
		int g = power_consumption / 1000;
		if (g < 3) {
			cout << "slabiy instrument";
		}
		if (g > 3 && g<7) {
			cout << "norm";
		}
		if (g >7) {
			cout << "pram tochn norm";
		}
	}
	void whole() override {
		cout << "if you didn't break it";
	}

};
//2
class HeatPowerTools  {
private:
	int Temperature;
public:
	HeatPowerTools( int temperature)
	{
		Temperature = temperature;
	}

};

class SolderingIron  {

public:
	int Heating_time;//время нагрева
	string _heating_principle;//принцип нагрева(Нихромовые, керамические, индукционные, импульсные)

	SolderingIron(int heating_time)
	{
		Heating_time = heating_time;
	}


};
//4

class ArcSolderingIron : public  SolderingIron , public HeatPowerTools, public powerTools{
public:
	ArcSolderingIron(string name, string creator, string work_with_materials, int temperature, int heating_time,int power_consumption)
		:SolderingIron(heating_time), HeatPowerTools(temperature), powerTools(name,creator,work_with_materials, power_consumption)
	{
	}
	void work() override {
		cout << "i don't want work" << endl;
	}


};

int main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));
	ArcSolderingIron d("awd", "dsdw", "wrq323asd", 3, 4, 5000);
	d.work();
	d.chargerPower();


	system("pause");
	return 0;
}