#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include "main.h"
using namespace std;

void changeLuck(Person &person1, Person &p2) {
    int luck = person1.getLuck();
    person1.setLuck(p2.getLuck());
    p2.setLuck(luck);
}

int main()
{
    srand(time(0));
    Person* a = new Person("Ann", 24, rand() % 100);
    Person* b = new Person("Blake", 33, rand() % 100);
    Person* c = new Person("Bob", 7, rand() % 100);
    Person* d = new Person("Ryan", 44, rand() % 100);
    Person* e = new Person("Ari", 20, rand() % 100);
    vector<Person> Persons { *a, *b, *c, *d, *e };

    for (int i = 0; i < 5; i++) {
        cout << Persons[i].getName() << " " << Persons[i].getAge()<< " " << Persons[i].getLuck()<< endl;
    }
    cout << "Luckiest person: ";
    int max = Persons[0].getLuck();
    int index;
    for (int i = 0; i < 5; i++) {
        if (max < Persons[i].getLuck()) {
            max = Persons[i].getLuck();
            index = i;
        }
    }
    cout << Persons[index].getName()<< ", rate of luck "<< Persons[index].getLuck() << endl;

    cout << "Luck of first person: " << Persons[0].getLuck() << ". Luck of second person: " << Persons[1].getLuck() << endl;
    changeLuck(Persons[0], Persons[1]);
    cout << "Luck of first person: " << Persons[0].getLuck() << ". Luck of second person: " << Persons[1].getLuck();

    delete a, b, c, d, e;

}