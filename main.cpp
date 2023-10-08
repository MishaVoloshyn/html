#pragma warning(disable: 4996)
#define _CRT_SECURE_NO_WARNINGS

#include <fstream>
#include <iostream>
using namespace std;


int main() {
  
    char way[256];
    cout << "Enter your way!!!: ";
    cin.getline(way, sizeof(way));
    ifstream in(way);


    char string;
    int open = 0;
    int close = 0;
    int difderent = 0;
    if (in.is_open())
    {
        cout << "File open" << endl;
        while (!in.eof())
        {
            in.get(string);
            cout << string << ' ';
            if (string == '<') {
                open++;
            }
            else if (string == '>') {
                close++;
            }
        }
        if (close = open) {
            cout << "All is correct!" << endl;
        }
        else{
            difderent = open - close;
            cout << "Find " << difderent << " errors!" << endl;
        }
        in.close();
    }
    else
    {
        cout << "Error with file" << endl;
    }
}