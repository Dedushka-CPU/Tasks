#include <iostream>
#include <set>
#include <cctype>
#include <string>

using std::cout;
using std::cin;
//using std::string;

int main() {
    std::set<char> letters;  
    std::string word;
    cin >> word;  

    for (char ch : word) {
        letters.insert(tolower(ch));
    }

    int flag = 0; 

    while (cin >> word) {
        for (auto it = letters.begin(); it != letters.end(); ) {
            flag = 0;  
            for (char ch : word) {
                if (*it == tolower(ch)) {
                    flag = 1;
                    break;
                }
            }
            if (flag == 0) {
                it = letters.erase(it);
            } else {
                ++it; 
            }
        }
    }

    for (char ch : letters) {
        cout << ch;
    }

    return 0;
}
