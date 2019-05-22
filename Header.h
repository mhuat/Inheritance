/*
	Author: Miguel Hernandez-Ortiz
	Date: November 29, 2017
	CopyRight © 2017 Miguel Hernandez-Ortiz
	All Rights Reserved
	Final Project Part 1: Inheritance(Classes)
	CSC215
*/


#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <fstream>

#ifndef __Header_H__
#define __Header_H__

using namespace std;

//Creating prototypes of display functions
void displayDragon();
void displayDemon();
void displayZombie();

//Defining my Classes

//Parent class Mythic
class Mythic
{
public:
	//constructor to instantiate objects
	Mythic();
	//destructor to destroy objects
	~Mythic();
	//setter
	void setType(string type);
	void setMyth(string myth);
	void setPower(string power);
	//getters
	string getType();
	string getMyth();
	string getPower();

protected:
	//all child classes will inherit these attributes
	//data members
	string m_type;
	string m_myth;
	string m_power;
	static int mythicCounter;
};

//Defining Children classes Dragon, Demon, Zombie

class Dragon : public Mythic
{
public:
	Dragon();
	~Dragon();

	void setScales(string scales);
	void setWings(string wings);

	string getScales();
	string getWings();

private:
	string m_scales;
	string m_wings;
	static int dragonCounter;
};


class Demon : public Mythic
{
public:
	Demon();
	~Demon();

	void setDarkAura(string darkAura);
	void setWit(string wit);

	string getDarkAura();
	string getWit();


private:
	string m_darkAura;
	string m_wit;
	static int demonCounter;
};


class Zombie : public Mythic
{
public:
	Zombie();
	~Zombie();
	
	void setBloodThirst(string bloodThirst);
	void setToxicity(string toxicity);

	string getBloodThirst();
	string getToxicity();


private:
	string m_bloodThirst;
	string m_toxicity;
	static int zombieCounter;
};


#endif