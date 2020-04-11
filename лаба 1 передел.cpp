// лаба 1 передел.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <ctime>
#include <string>


using namespace std;

class fun {
	virtual void work() = 0;
	virtual void chargerPower() = 0;
	virtual void whole() = 0;

};
//1
class powerTools: public fun {
protected:
	//int power_consumption= rand() % 5 + 3;
	string Name;
	string Creator;
	string Work_with_materials;
public:
	powerTools(string name,string creator,string work_with_materials) {
	Name = name;
	Creator = creator;
	Work_with_materials = work_with_materials;
	}
	void work() override 
	{
		cout << "ne yveren";
	}

	void chargerPower() override 
	{
		/*int g = power_consumption / 1000;
		if (g < 3) {
			cout << "slabiy instrument";
		}
		if (g > 3 && g<7) {
			cout << "norm";
		}
		if (g >7) {
			cout << "pram tochn norm";
		}*/
		cout << "tyt budut vozmojnosty powertool";
	}
	void whole() override {
		cout << "if you didn't break it";
	}

};
//2
class HeatPowerTools: public powerTools {

int Temperature;

public:
	HeatPowerTools(string name, string creator, string work_with_materials,int temperature) :powerTools(name, creator, work_with_materials)
	{
	Temperature = temperature;
	}
	
		

};
/*
class buildingHairDryer: public HeatPowerTools {
public:
	buildingHairDryer() {}
	string additional_items;//дополнительные элементы(Индикатор температуры, Защита от перегрева, Регулятор мощности и т.п.)
	string use;
	int heating_of_air_mass;

	

};*/
//3
/*
class HotGlueGun : public HeatPowerTools {
public:
	int diameter_glue_of_stick;
	HotGlueGun(){}
};*/
//3

class SolderingIron : public HeatPowerTools {

	public:
	int Heating_time;//время нагрева
	string _heating_principle;//принцип нагрева(Нихромовые, керамические, индукционные, импульсные)

	SolderingIron(string name, string creator, string work_with_materials, int temperature, int heating_time) 
		:HeatPowerTools(name, creator, work_with_materials, temperature)
	{
		Heating_time = heating_time;
	}
	
	void work() override
	{	

		cout << "i work like this: tsssssssspppshshsshsh"<<endl;
	}
	
	

};
//4

class ArcSolderingIron : public  SolderingIron{
public:
	ArcSolderingIron(string name, string creator, string work_with_materials, int temperarure, int heating_time)
		:SolderingIron(name, creator, work_with_materials, temperarure, heating_time)
	{		
	}
};
//4
/*
class HammerSolderingIrons : public  SolderingIron  {
	HammerSolderingIrons() {

	}

};*/

int main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));
	ArcSolderingIron d("asd","sd","aasd", 12,23);
	d.work();
	cout << "heat =" << d.Heating_time<<endl;
	d.whole();
	system("pause");
	return 0;
}