#include <iostream>
#include <algorithm>
using namespace std;

const string original_one = "marshtomp";
const string new_one = "fjxmlhx";
string replace_string(string str) {
    string ss = str;
//    transform(str.begin(), str.end(), str.begin(),(int (*) (int))tolower);

    string::size_type pos(0);
    bool flag = false;
    while (true) {
        if ( (pos = str.find(original_one)) != string::npos) {
            str.replace(pos, original_one.length(), new_one);
            flag = true;
        } else {
            break;
        }
    }
    return flag ? str : ss;
}

int main() {
    string str;
    while (getline(cin, str)) {
        unsigned long length = str.length();
        unsigned long location_of_space[length];
        int count_of_space = 0;
        for (unsigned long i = 0; i < length - 1; ++i) {
            if (str[i] == ' ') {
                location_of_space[count_of_space ++] = i;
            }
        }
        cout << replace_string(str.substr(0, location_of_space[0] + 1));
        for (int i = 0; i < count_of_space; ++i) {
            cout << replace_string(str.substr(location_of_space[i] + 1, location_of_space[i + 1] - location_of_space[i]));
        }

        cout << endl;
    }
}