#include "10-10-5.h"
#include <iostream>
#include <cstring>
inline void clear();

int main()
{
    using std::cout;
    using std::endl;
    using std::cin;

    Stack line;
    char choose = 'q';
    char name[32];
    double pay;

    cout << "Choose mode: A.add  B.del  Q.quit\n";
    cin >> choose;
    clear();
    while (choose != 'Q' && choose != 'q')
    {
        if (choose == 'A' || choose == 'a')
        {
            cout << "Enter name: ";
            cin.getline(name, 32);
            cout << "Enter payment: ";
            cin >> pay;
            clear();
            Customer cus;
            strcpy(cus.fullname, name);
            cus.payment = pay;
            line.push(cus);
        }
        else if(choose == 'B' || choose == 'b')
        {
            Customer cus{"no name", 0.0};
            line.pop(cus);
            sum += cus.payment;
            cout << "Sum: " << sum << endl;
        }
        else
            cout << "Error input." << endl;
        cout << "Choose mode: A.add  B.del  Q.quit\n";
        cin >> choose;
        clear();
    }
    cout << "Done!" << endl;
    return 0;
}

inline void clear()
{
    using std::cin;
    char ch;
    cin.get(ch);
    while (ch != '\n')
        cin.get(ch);
}