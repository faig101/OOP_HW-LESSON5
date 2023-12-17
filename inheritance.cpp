#include <iostream>
using namespace std;
class homepets {
protected:
    string name;

public:
    homepets(const string& animalName) : name(animalName) {}

    void displayInfo() const {
        cout << "Имя: " << name << endl;
    }
};

class Dog : public homepets {
private:
    string type;

public:
    Dog(const string& dogName, const string& dogType)
            : homepets(dogName), type(dogType) {}

    void displayInfo() const {
        homepets::displayInfo();
        cout << "Порода: " << type << endl;
    }
};

class Cat : public homepets {
private:
    string color;

public:
    Cat(const string& catName, const string& catColor)
            : homepets(catName), color(catColor) {}

    void displayInfo() const {
        homepets::displayInfo();
        cout << "Цвет: " << color << endl;
    }
};

class Parrot : public homepets {

public:
    Parrot(const string& parrotName) :homepets(parrotName) {}
};

int main() {
    Dog myDog("шарик", "овчарка");
    Cat myCat("том", "серый");
    Parrot myParrot("Кеша");

    cout << "Информация о собаке:" << endl;
    myDog.displayInfo();
    cout << endl;
    cout << "Информация о кошке:" << endl;
    myCat.displayInfo();
    cout << endl;

    cout << "Информация о попугае:" << endl;
    myParrot.displayInfo();
    cout << endl;
    return 0;
}
