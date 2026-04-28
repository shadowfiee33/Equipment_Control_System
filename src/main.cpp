#include <iostream>
#include <string>
using namespace std;

void showMenu() {
    cout << "СИСТЕМА УЧЕТА ОБОРУДОВАНИЯ" << endl;
    cout << "1. Просмотреть список оборудования" << endl;
    cout << "2. Оформить выдачу сотруднику" << endl;
    cout << "3. Проверить статус возврата" << endl;
    cout << "0. Выход" << endl;
    cout << "Выберите действие: ";
}

int main() {
    int choice;
    string equipment = "Дрель Bosch (ID: 1022)";
    
    showMenu();
    cin >> choice;

    if (choice == 2) {
        cout << "\n[УСПЕХ] Оборудование '" << equipment << "' выдано сотруднику Иванову." << endl;
        cout << "Статус в БД обновлен на: ВЫДАНО." << endl;
    }
    return 0;
}
