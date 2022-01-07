#include <iostream>
#include <cctype>
#include <string>

using namespace std;
string upper(string input);

int main()
{
    string input;
    cout << "Enter a string(q to quit): ";
    while (getline(cin, input) && input != "q")
    {
        cout << upper(input) << endl;
        cout << "Enter a string(q to quit): ";
    }
    cout << "Bye!\n";
    return 0;
}

string upper(string input)
{
    for (int i = 0; i < input.length(); i++)
        input[i] = toupper(input[i]);
    return input;
}