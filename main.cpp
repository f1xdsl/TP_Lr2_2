#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream> 
#include <string>
using namespace std;

int main() {
    ifstream file("test.txt");

    string line;
    char* p;
    if (!file.is_open())
        cout << "error" << endl;


    else
    {
        while (getline(file, line)) {

            char* newstr = new char[line.length() + 1];
            strcpy(newstr, line.c_str());
            string word;
            p = strtok(newstr, " \n");
            while (p) {
                if (strlen(p) == 2 && isdigit(p[0]) && isdigit(p[1])) {
                    cout << line << endl;
                    break;
                }
                p = strtok(NULL, " \n");
            }
        }
    }

    return 0;
}


