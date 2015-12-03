//#include <iostream>
//
//using namespace std;
//
//
//string getString(string str) {
//    int l = (int)str.length();
//    if (l < 2)
//        return str;
//    string result = "";
//    for (int i = 0; i < l - 1; ++i) {
//        if (str[i] == str[i + 1]) {
//            while (i < l - 1 && str[i] == str[i + 1])
//                ++i;
//        } else {
//            result += str[i];
//        }
//    }
//
//    if (str[l - 1] != str[l - 2]) {
//        result += str[l - 1];
//    }
//    return result;
//}
//int main() {
//    int n;
//    cin >> n;
//    string str;
//    char letter[3] = {'A', 'B', 'C'};
//    unsigned long max;
//    while (n --) {
//        cin >> str;
//        max = 0;
//        for (unsigned long i = 0; i < str.length() + 1; ++i) {
//            for (int j = 0; j < 3; ++j) {
//                string ss = str.substr(0, i) + letter[j] + str.substr(i);
//                unsigned long before = str.length() + 1;
//                string current = getString(ss);
//                while (current.length() != ss.length()) {
//                    ss = current;
//                    current = getString(ss);
//                }
//                unsigned long after = current.length();
//                if (before - after > max)
//                    max = before - after;
//            }
//        }
//        cout << max << endl;
//    }
//    return 0;
//}
