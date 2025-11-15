#include <iostream>
#include <fstream>
using namespace std;

void Identifier(string b) {
    if (!((b[0] >= 'a' && b[0] <= 'z') ||
          (b[0] >= 'A' && b[0] <= 'Z') ||
          (b[0] == '_'))) {
        cout << "Invalid Identifier" << endl;
        return;
    }
    for (int i = 1; i < b.length(); i++) {
        if (!((b[i] >= 'a' && b[i] <= 'z') ||
              (b[i] >= 'A' && b[i] <= 'Z') ||
              (b[i] >= '0' && b[i] <= '9') ||
              (b[i] == '_'))) {
            cout << "Invalid Identifier" << endl;
            return;
        }
    }
    cout << "Valid Identifier" << endl;
}

int main() {
    ifstream file("Sample.txt");
    if (!file) {
        cout << "File not found!" << endl;
        return 0;
    }

    string s;
    while (getline(file, s))
    {
        cout << s << " " << "Identified: " << s;
    }
    return 0;
}
