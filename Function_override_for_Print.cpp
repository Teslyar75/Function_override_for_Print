//2) Создать абстрактный базовый класс Employer(служащий) с чисто виртуальной функцией Print().
// Создайте три производных класса : President, Manager, Worker.
//Переопределите функцию Print() для вывода информации, соответствующей каждому типу служащего.


#include <iostream>
using namespace std;

class Employer {
public:
    virtual void Print() const = 0;
    virtual ~Employer() {}
};

class President : public Employer {
public:
    void Print() const override {
        cout << "Президент: Высший исполнитель, великий мудрый кормчий, ответственный за общее направление развития.\n";
    }
};

class Manager : public Employer {
public:
    void Print() const override {
        cout << "Менеджер: Специалист, ответственный за планирование, организацию и управление работой группы людей." << endl;
    }
};

class Worker : public Employer {
public:
    void Print() const override {
        cout << "Работник: Сотрудник, занятый ручной или промышленной работой." << endl;
    }
};

int main() {
    setlocale(0, "");

    President president;
    Manager manager;
    Worker worker;

    cout << "Информация о сотрудниках компании:\n";
    president.Print();
    manager.Print();
    worker.Print();
}
