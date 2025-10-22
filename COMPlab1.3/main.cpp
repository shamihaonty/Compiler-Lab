#include <iostream>
using namespace std;

bool is_Comment(string s) {
    if (s.size() >= 2 && s[0] == '/' && s[1] == '/')
        return true;

    else if (s.size() >= 4 && s[0] == '/' && s[1] == '*' &&
             s[s.size() - 2] == '*' && s[s.size() - 1] == '/')
        return true;

    else
        return false;
}

int main() {
    int n;
    cin >> n;
    cin.ignore();

    while (n--) {
        string s;
        getline(cin, s);

        if (is_Comment(s)) {
            cout << "The input is a Comment line" << endl;
        } else {
            cout << "The input is not a Comment line" << endl;
        }
    }

    return 0;
}
