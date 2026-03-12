#include <iostream>
#include <string>
using namespace std;

struct Student
{
    string name;
    int course;
    string group;
    int mark1, mark2, mark3, mark4;
};

int main()
{
    int n;
    cout << "Введіть кількість студентів: ";
    cin >> n;

    Student st[100];

    for (int i = 0; i < n; i++)
    {
        cout << "\nСтудент " << i + 1 << endl;

        cout << "Прізвище та ім'я: ";
        cin.ignore();
        90getline(cin, st[i].name);

        cout << "Курс: ";
        cin >> st[i].course;

        cout << "Група: ";
        cin >> st[i].group;

        cout << "Оцінка 1: ";
        cin >> st[i].mark1;

        cout << "Оцінка 2: ";
        cin >> st[i].mark2;

        cout << "Оцінка 3: ";
        cin >> st[i].mark3;

        cout << "Оцінка 4: ";
        cin >> st[i].mark4;
    }

    int count = 0;

    cout << "\nСтуденти, які мають менше 50 балів:\n";

    for (int i = 0; i < n; i++)
    {
        if (st[i].mark1 < 50 || st[i].mark2 < 50 ||
            st[i].mark3 < 50 || st[i].mark4 < 50)
        {
            cout << st[i].name << "  курс: " << st[i].course
                 << "  група: " << st[i].group << endl;
            count++;
        }
    }

    cout << "\nКількість таких студентів: " << count << endl;

    return 0;
}