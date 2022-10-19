

#include <iostream>
#include <Windows.h>
#include <conio.h>

using namespace std;
//Задание 1. Создайте структуру, описывающую комплексное
//число.Реализуйте арифметические операции с комплексными числами : сумму, разность, умножение, деление 

//--Позволено не делать, под предлогом разбора в аудитории


//Задание 2. Реализовать структуру «Автомобиль» (длина,
//клиренс(высота посадки), объем двигателя, мощность
//двигателя, диаметр колес, цвет, тип коробки передач).
//Создайте функции для задания значений, отображения
//значений, поиска значений.

struct Car {
    int lenght;
    int clearance;
    int engine_volume;
    int engine_power;
    int wheel_diameter;
    char color[64];
    char transmission[64];
};

void FillStruct(Car* p, int& i);
void PrintStruct(Car* p, int size, int mode, int t);

void SearchOnLenght(Car* p, int size, int value);
void SearchOnClearance(Car* p, int size, int value);
void SearchOnEngineVolume(Car* p, int size, int value);
void SearchOnEnginePower(Car* p, int size, int value);
void SearchOnColor(Car* p, int size, char* value);
void SearchOnTransmission(Car* p, int size, char* value);


//Заполение структуры
void FillStruct(Car* p,int &i) {
    i++;
    cout << "Enter a lenght - ";
    cin >> p[i - 1].lenght;
    cout << "Enter a clearance - ";
    cin >> p[i - 1].clearance;
    cout << "Enter a engine_volume - ";
    cin >> p[i - 1].engine_volume;
    cout << "Enter a engine_power - ";
    cin >> p[i - 1].engine_power;
    cout << "Enter a wheel_diameter - ";
    cin >> p[i - 1].wheel_diameter;
    cout << "Enter a color - ";
    cin.ignore(64, '\n');
    gets_s(p[i - 1].color, 65);
    cout << "Enter a specie of transmission - ";
    cin.ignore(64, '\n');
    gets_s(p[i - 1].transmission, 65);
}
//Вывод структуры
void PrintStruct(Car *p, int size,int mode, int t) {
    if (mode == 1) { //За вывод всех элементов массива структуры вереницей
        int z;
        for (int i = 0; i < size; i++) {
            cout << "Number of car: " << i + 1 << endl;
            cout << "Lenght of car - " << p[i].lenght << endl;
            cout << "Clearance of car - " << p[i].clearance << endl;
            cout << "Engine_volume of car - " << p[i].engine_volume << endl;
            cout << "Engine_power of car - " << p[i].engine_power << endl;
            cout << "Wheel Diameter of car - " << p[i].wheel_diameter << endl;
            cout << "Color of car - " << p[i].color << endl;
            cout << "Transmission of car - " << p[i].transmission << endl;
            cout << endl;
        }
        cout << "Continue? (Press any keys)";
        z = _getch();
    }
    else { // Для функции поиска
        cout << "Number of car: " << t+1 << endl;
        cout << "Lenght of car - " << p[t].lenght << endl;
        cout << "Clearance of car - " << p[t].clearance << endl;
        cout << "Engine_volume of car - " << p[t].engine_volume << endl;
        cout << "Engine_power of car - " << p[t].engine_power << endl;
        cout << "Wheel Diameter of car - " << p[t].wheel_diameter << endl;
        cout << "Color of car - " << p[t].color << endl;
        cout << "Transmission of car - " << p[t].transmission << endl;
        cout << endl;
    }
}
//Функция поиска
void SearchCarOnValue(Car* p, int size) {
    int s; //Выбор пользователя опции
    int value; //Значение выбранного значения
    char* buff = new char[64];
    char* buff1 = new char[64];
    cout << "By what parameter would you like to search, sir?:\n";
    cout << "Lenght - 1\n";
    cout << "Clearance - 2\n";
    cout << "Engine_volume - 3\n";
    cout << "Engine_power - 4\n";
    cout << "Wheel_diameter - 5\n";
    cout << "Color - 6\n";
    cout << "Transmission - 7\n";
    cin >> s;
    switch (s) {
    case 1:
        system("cls");
        cout << "Enter a searching lenght - ";
        cin >> value;
        SearchOnLenght(p, size, value);
        break;
    case 2:
        system("cls");
        cout << "Enter a searching clearance - ";
        cin >> value;
        SearchOnClearance(p, size, value);
        break;
    case 3:
        system("cls");
        cout << "Enter a searching engine volume - ";
        cin >> value;
        SearchOnEngineVolume(p, size, value);
        break;
    case 4:
        system("cls");
        cout << "Enter a searching engine power - ";
        cin >> value;
        SearchOnEnginePower(p, size, value);
        break;
    case 5:
        system("cls");
        cout << "Enter a searching color - ";
        cin.ignore(256, '\n');
        gets_s(buff, 65);
        SearchOnColor(p, size, buff);
        break;
    case 6:
        system("cls");
        cout << "Enter a searching specie of transmission - ";
        cin.ignore(256, '\n');
        gets_s(buff1, 65);
        SearchOnTransmission(p, size, buff1);
        break;
    }
}
//Подфункции поиска
void SearchOnLenght(Car* p, int size, int value) {
    int z;
    cout << "Search results: \n\n";
    for (int i = 0; i < size; i++) {
        if (p[i].lenght == value) {
            PrintStruct(p, size, 0, i);
        }
    }
    cout << endl;
    cout << "Continue? (Press any keys)";
    z = _getch();
}
void SearchOnClearance(Car* p, int size, int value) {
    int z;
    cout << "Search results: \n\n";
    for (int i = 0; i < size; i++) {
        if (p[i].clearance == value) {
            PrintStruct(p, size, 0, i);
        }
    }
    cout << endl;
    cout << "Continue? (Press any keys)";
    z = _getch();
}
void SearchOnEngineVolume(Car* p, int size, int value) {
    int z;
    cout << "Search results: \n\n";
    for (int i = 0; i < size; i++) {
        if (p[i].engine_volume == value) {
            PrintStruct(p, size, 0, i);
        }
    }
    cout << endl;
    cout << "Continue? (Press any keys)";
    z = _getch();
}
void SearchOnEnginePower(Car* p, int size, int value) {
    int z;
    cout << "Search results: \n\n";
    for (int i = 0; i < size; i++) {
        if (p[i].engine_power == value) {
            PrintStruct(p, size, 0, i);
        }
    }
    cout << endl;
    cout << "Continue? (Press any keys)";
    z = _getch();
}
void SearchOnColor(Car* p, int size, char* value) {
    int z;
    cout << "Search results: \n\n";
    for (int i = 0; i < size; i++) {
        if (strcmp(p[i].color,value)) {
            PrintStruct(p, size, 0, i);
        }
    }
    cout << endl;
    cout << "Continue? (Press any keys)";
    z = _getch();
}
void SearchOnTransmission(Car* p, int size, char* value) {
    int z;
    cout << "Search results: \n\n";
    for (int i = 0; i < size; i++) {
        if (strcmp(p[i].transmission, value)) {
            PrintStruct(p, size, 0, i);
        }
    }
    cout << endl;
    cout << "Continue? (Press any keys)";
    z = _getch();
}
//--
int main()
{
    int size = 0;
    Car* p = new Car[size];
    while (true) {
        int s;
        system("cls");
        cout << "New car -. |1|\n";
        cout << "Print all cars -. |2|\n";
        cout << "Search by value -. |3|\n";
        cout << "Enter the number of choice:\n";
        cin >> s;
        switch (s) {
        case 1:
            system("cls");
            FillStruct(p, size);
            break;
        case 2:
            system("cls");
            PrintStruct(p, size,1,0);
            break;
        case 3:
            system("cls");
            SearchCarOnValue(p, size);
            break;
        }
    }
}


