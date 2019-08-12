/*
	Author: Miguel Hernandez-Ortiz
	Date: November 29, 2017
*/

#include "Header.h"

//Defining display functions

void displayDragon()
{
	//properly get member input from user for  dragon being made.
}

void displayDemon()
{
	//properly get member input from user for  demon being made.
}

void displayZombie()
{
	//properly get member input from user for  zombie being made.
}

//Start of class Mythic

//defining the constructor
Mythic::Mythic()
{
	mythicCounter++;
	system("cls");
	cout << endl << "You've created a Mythic being." << endl;
	system("pause");
	system("cls");
}
//defining the destructor
Mythic::~Mythic()
{
	mythicCounter--;
	system("cls");
	cout << endl << "You've destroyed a Mythic being." << endl;
	system("pause");
	system("cls");
}
//defining setters
void Mythic::setType(string type) { m_type = type; }
void Mythic::setMyth(string myth) { m_myth = myth; }
void Mythic::setPower(string power) { m_power = power; }

//defining getters
string Mythic::getType() { return m_type; }
string Mythic::getMyth() { return m_myth; }
string Mythic::getPower() { return m_power; }

//End of class Mythic

//***\\

//Start of class Dragon

//defining the constructor
Dragon::Dragon()
{
	dragonCounter++;
	system("cls");
	cout << endl << "You've created a Dragon." << endl;
	system("pause");
	system("cls");
}
//defining the destructor
Dragon::~Dragon()
{
	dragonCounter--;
	system("cls");
	cout << endl << "You've destroyed a Dragon." << endl;
	system("pause");
	system("cls");
}
//defining setters
void Dragon::setScales(string scales) { m_scales = scales; }
void Dragon::setWings(string wings) { m_wings = wings; }

//defining getters
string Dragon::getScales() { return m_scales; }
string Dragon::getWings() { return m_wings; }

//End of class Dragon

//***\\

//Start of class Demon

//defining the constructor
Demon::Demon()
{
	demonCounter++;
	system("cls");
	cout << endl << "You've created a Demon." << endl;
	system("pause");
	system("cls");
}
//defining the destructor
Demon::~Demon()
{
	demonCounter--;
	system("cls");
	cout << endl << "You've destroyed a Demon." << endl;
	system("pause");
	system("cls");
}
//defining setters
void Demon::setDarkAura(string darkAura) { m_darkAura = darkAura; }
void Demon::setWit(string wit) { m_wit = wit; }


//defining getters
string Demon::getDarkAura() { return m_darkAura; }
string Demon::getWit() { return m_wit; }

//End of class Demon

//***\\

//Start of class Zombie

//defining the constructor
Zombie::Zombie()
{
	zombieCounter++;
	system("cls");
	cout << endl << "You've created a Zombie." << endl;
	system("pause");
	system("cls");
}
//defining the destructor
Zombie::~Zombie()
{
	zombieCounter--;
	system("cls");
	cout << endl << "You've destroyed a Zombie." << endl;
	system("pause");
	system("cls");
}
//defining setters
void Zombie::setBloodThirst(string type) { m_bloodThirst = type; }
void Zombie::setToxicity(string myth) { m_toxicity = myth; }


//defining getters
string Zombie::getBloodThirst() { return m_bloodThirst; }
string Zombie::getToxicity() { return m_toxicity; }

//End of class Zombie

//End of file\\
