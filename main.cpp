#include <iostream>
#include <string>
#include <fstream>
#include <Windows.h>
	using namespace std;

class Student
{
public:
	Student()
	{

	}
	void setfam(string fam) 
	{
		this->fam = fam;
	}
	void setmath(int math) 
	{
		this->math = math;
	}
	void setphys(int phys) 
	{
		this->phys = phys;
	}
	string getfam() 
	{
		return fam;
	}
	int getmath() 
	{
		return math;
	}
	int getphys() 
	{
		return phys;
	}

	Student(string fam, int math, int phys)
	{
		this->fam = fam;
		this->math = math;
		this->phys = phys;
	}

private:
	string fam;
	int math;
	int phys;
};


int main()
{
	Student student[30];
	SetConsoleCP(1251);
	fstream file("DataBase.txt");
	if (!file.is_open()) 
	{
		std::cout << "Not find file!" << endl;
		exit(1);
	}
	for (int i = 0; i < 30; ++i)
	{
		std::string fam;
		int math;
		int phys;
		file >> fam;
		file >> math;
		file >> phys;
		student[i].setfam(fam);
		student[i].setphys(phys);
		student[i].setmath(math);
		
		if ( math == 5 && phys == 5)
		{
			std::cout << fam << " " << math << " " << phys << endl;
		}
		else 
		{
			std::cout << fam << " " << math  << " " << phys << " " << "stupid student" << endl;
		}
	}
	return 0;
}
