//#include <iostream>
//#include <string.h>
//using namespace std;
//
//int main() {
//    char s[200];
//    while (cin.getline(s,200)) {
//        char old_string[] = "marshtomp";
//        char new_string[] = "fjxmlhx";
//        unsigned long string_len = strlen(s);
//        unsigned long old_len = strlen(old_string);
//        unsigned long new_len = strlen(new_string);
//
//        for (unsigned long i = 0; i < string_len; i++) {
//            int j = 0;
//            unsigned long k = i;
//            while (s[k] == old_string[j] || s[k] == (old_string[j] - 32)) {
//                k++;
//                j++;
//                if (j == old_len) {
//                    unsigned long q = i;
//                    strncpy(s + i, new_string, new_len);
//                    strncpy(s + i + new_len, s + i + old_len, string_len - i - old_len);
//                    strncpy(s + string_len - old_len + new_len, "", old_len - new_len);
//                }
//            }
//        }
//        cout << s << endl;
//    }
//}
