// lab_6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//корабель, пароплав, вітрильник, яхта.

#include <iostream>
#include <Windows.h>

using namespace std;

// Визначаємо базовий клас Корабель
class Ship 
{
    int leght, width;
public:
    void Set_l(double l) { //Довжина
        leght = l;
    }
    double Get_l() {
        return leght;
    }

    void Set_w(double w) { //Ширина
        width = w;
    }
    double Get_w() {
        return width;
    }
   ~Ship(){}
};

// Визначаємо клас Пароплав
class Steamer : public Ship 
{
    string fuel;    //Паливо
    double power;   //Потужність дв
public:

    void Set_fuel(string f) {
        fuel = f;
    }
    string Get_fuel() {
        return fuel;
    }

    void Set_power(double p) {
        power = p;
    }
    double Get_power() {
        return power;
    }
    void show();
    ~Steamer(){}
};

// Визначаємо клас Вітрильник
class Sailboat : public Ship 
{
    int sails; // к-сть вітрил
    int masts; // к-сть мачт
public:
    void Set_sails(int s) {
        sails = s;
    }
    int Get_sails() {
        return sails;
    }

    void Set_masts(int m) {
        masts = m;
    }
    int Get_masts() {
        return masts;
    }
    void show();
    ~Sailboat(){}
};

// Визначаємо клас Яхта
class Yacht : public Ship 
{
    string name; //Назва
    int hull;    //К-сть корпусів
public:
    void Set_name(string n) {
        name = n;
    }
    string Get_name() {
        return name;
    }

    void Set_hull(int h) {
        hull = h;
    }
    int Get_hull() {
        return hull;
    }
    void show();
    ~Yacht(){}
};

void Steamer :: show() {
    cout << "\t\t\tПароплав" << endl;
    cout << "Довжина корабля: " << Get_l() << " м" << endl;
    cout << "Ширина корабля: " << Get_w() << " м" << endl;
    cout << "Паливо, що використовується: " << fuel << endl;
    cout << "Потужність двигуна: " << power << " МВт" << endl;
}

void Sailboat::show() {
    cout << "\t\t\tВітрильник" << endl;
    cout << "Довжина корабля: " << Get_l() << " м" << endl;
    cout << "Ширина корабля: " << Get_w() << " м" << endl;
    cout << "К-сть мачт: " << masts << endl;
    cout << "К-сть вітрил: " << sails << endl;
}

void Yacht::show() {
    cout << "\t\t\tЯхта" << endl;
    cout << "Довжина корабля: " << Get_l() << " м" << endl;
    cout << "Ширина корабля: " << Get_w() << " м" << endl;
    cout << "Назва: " << name << endl;
    cout << "К-сть корпусів: " << hull << endl;
}
int main()
{
    SetConsoleOutputCP(1251);
    Steamer s;
    s.Set_l(95);
    s.Set_w(14);
    s.Set_fuel("Вугілля");
    s.Set_power(20);
    s.show();
    Sailboat x;
    x.Set_l(162);
    x.Set_w(18.5);
    x.Set_sails(33);
    x.Set_masts(5);
    x.show();
    Yacht y;
    y.Set_name("Princess");
    y.Set_l(13.5);
    y.Set_w(4.2);
    y.Set_hull(1);
    y.show();
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
