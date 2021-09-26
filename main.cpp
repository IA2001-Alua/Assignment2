#include "main.h"



Person::Person(string name, int age, int luck)
{
	this->name = name;
	this->age = age;
	this->luck = luck;
}

Person::Person(){}

void Person::setName(string name)
{
	this->name = name;
}

void Person::setAge(int age)
{
	this->age = age;
}

void Person::setLuck(int luck)
{
	this->luck = luck;
}

string Person::getName()
{
	return name;
}

int Person::getAge()
{
	return age;
}

int Person::getLuck()
{
	return luck;
}
