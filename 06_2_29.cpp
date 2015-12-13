//#include <iostream>
//#include "string.h"
//using namespace std;
//
//const char* month[12] = {"January", "February", "March", "April", "May", "June",
//                    "July", "August", "September", "October", "November" , "December"};
//int getMonth(char* m) {
//    int index = 0;
//    while (index < 12) {
//        if (strcmp(month[index], m) == 0) {
//            return index + 1;
//        } else {
//            ++index;
//        }
//    }
//
//    return -1;
//}
//
//bool isLoop(int year) {
//    return (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
//}
//
//int getLoopYear(int y, int m, int d) {
//    int res = y / 4 - y / 100 + y / 400;
//    if (isLoop(y) && (m < 2 || (m == 2 && d < 29)))
//        res --;
//    return res;
//}
//
//
//int main() {
//    int n;
//    cin >> n;
//    char dot;
//    int index = 1;
//    while (index <= n) {
//        char input_month[20];
//        int start_day, start_year;
//        cin >> input_month >> start_day >> dot >> start_year;
//        int start_month = getMonth(input_month);
//        int end_day, end_year;
//        cin >> input_month >> end_day >> dot >> end_year;
//        int end_month = getMonth(input_month);
//        int number = getLoopYear(end_year, end_month, end_day) - getLoopYear(start_year, start_month, start_day);
//
//
//        if (isLoop(start_year) && start_month == 2 && start_day == 29)
//            number ++;
//
//        cout << "Case #" << index ++ << ": " << number << endl;
//    }
//}