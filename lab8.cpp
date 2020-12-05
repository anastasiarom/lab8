// lab8.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//


#include"File.h"

using namespace std;
int main()
{
    Teacher t1("Alexandra_Sergeevna_Sidorovich", 4, 10, "OAIP", 6);
    Teacher t2("Sergey_Valentinovich_Batyukov", 3, 4, "TEC",3);
    Teacher t3("Iuliia_Yurievna_Zheltko", 2, 9, "KPiAP",7);
    Teacher t4("Konstantin_Igorevich_Davydovich", 3, 12, "BZH",8);
    Teacher t5("Svetlana_Sergeevna_Stoma", 4, 4, "EP",3);
    Teacher un[5] = { t1,t2,t3,t4,t5 };
    cout << "\n-------TXT in TXT mode-------\n";
    File f1("1.txt", txt);
    f1.open("w");
    f1.set_size(5);
    f1 << t1;
    f1 << t2;
    f1 << t3;
    f1 << t4;
    f1 << t5;
    f1.close();
    f1.open("r");
    cout << f1;
    f1.close();
    cout << "\n--------------------------------------------------------";
    cout << "\n-------TXT in BIN mode-------\n";
    File f2("2.txt", bin);
    f2.open("w");
    f2.set_size(5);
    f2 << t1;
    f2 << t2;
    f2 << t3;
    f2 << t4;
    f2 << t5;
    f2.close();
    f2.open("r");
    cout << f2;
    f2.close();
    cout << "\n--------------------------------------------------------";
    cout << "\n-------BIN in BIN mode-------\n";
    File f3("3.bin", bin);
    f3.open("w");
    f3.set_size(5);
    f3 << t1;
    f3 << t2;
    f3 << t3;
    f3 << t4;
    f3 << t5;
    f3.close();
    f3.open("r");
    cout << f3;
    f3.close();
    cout << "\n--------------------------------------------------------\n";

    int i = 0, line = 0;
    do {
        cout << "Enter the line that you want to change:" << endl;
        cin >> line;
        f2.edit(line, un);
        f2.open("r");
        cout << "\n--------------------------------------------------------\n";
        cout << f2;
        f2.close();
        cout << "Do you want to change anything else?\n1 - yes\n0 - no" << endl;
        rewind(stdin);
        cin >> i;
    } while (i);
    cout << "\n--------------------------------------------------------\n";
    cout << "Sort by fio:" << endl;
    cout << "\n--------------------------------------------------------\n";
    f1.bouble_sort_fio();
    f1.open("r");
    cout << f1;
    f1.close();
    cout << "\n--------------------------------------------------------\n";
    cout << "Sort by number of groups:" << endl;
    cout << "\n--------------------------------------------------------\n";
    f1.bouble_sort_groups();
    f1.open("r");
    cout << f1;
    f1.close();
    cout << "\n--------------------------------------------------------\n";
    cout << "Sort by number of labs:" << endl;
    cout << "\n--------------------------------------------------------\n";
    f1.bouble_sort_labs();
    f1.open("r");
    cout << f1;
    f1.close();
    cout << "\n--------------------------------------------------------\n";
    cout << "Sort by subject:" << endl;
    cout << "\n--------------------------------------------------------\n";
    f1.bouble_sort_subject();
    f1.open("r");
    cout << f1;
    f1.close();
    cout << "\n--------------------------------------------------------\n";
    cout << "Sort by number of current labs:" << endl;
    cout << "\n--------------------------------------------------------\n";
    f1.bouble_sort_curLabs();
    f1.open("r");
    cout << f1;
    f1.close();

    Ring r;
    f1.open("r");
    Teacher t;
    for (int i = 0; i < f1.get_size(); i++)
    {
        t = f1.read();
        r.push(t);
    }
    r.output();
    Iterator I(&r);
    I.shell();
    cout << "\n--------------------------------------------------------\n";
    cout << "\nAfter sorting by the number of NON-issued labs\n";
    cout << "\n--------------------------------------------------------\n";
    r.output();
    cout << "\n--------------------------------------------------------\n";
    cout << "\nAfter sorting subjects in alphabetical order depending on the number of NON-issued labs\n";
    cout << "\n--------------------------------------------------------\n";
    I.sort_special();
    r.output();
}
