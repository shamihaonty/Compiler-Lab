#include <iostream>
using namespace std;

bool is_Operator(string s) {
    if (s == "+" || s == "-" || s == "*" || s == "/" || s == "%" || s == "=") {
        return true;
    } else {
        return false;
    }
}

int main() {
    int n;
    cin >> n;
    while (n--) {
        string s;
        cin >> s;

        if (is_Operator(s)) {
            cout << "The input is an Operator" << endl;
        } else {
            cout << "The input is Not an Operator" << endl;
        }
    }

    return 0;
}
