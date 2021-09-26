#ifndef APP_MAIN_H
#define APP_MAIN_H
#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
	Person();
	Person(string name, int age, int luck);
	void setName(string name);
	void setAge(int age);
	void setLuck(int luck);
	string getName();
	int getAge();
	int getLuck();

private:
	string name;
	int age;
	int luck;

};

#endif