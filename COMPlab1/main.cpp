#include <iostream>
using namespace std;

bool is_Numeric(string s){
    for(int i = 0; i < s.size(); i++){
        if(!(s[i] >= '0' && s[i] <= '9')){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cin >> n;
    while(n--){
        string s;
        cin >> s;
        if(is_Numeric(s)){
            cout << "The number is Numeric\n";
        }
        else{
            cout << "The number is Not Numeric\n";
        }
    }
    return 0;
}
