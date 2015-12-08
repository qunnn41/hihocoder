//#include <iostream>
//using namespace std;
//
//string month[12] = {"January", "February", "March", "April", "May", "June",
//                    "July", "August", "September", "October", "November" , "December"};
//
//int getMonth(string m) {
//    int index = 0;
//    while (index < 12) {
//        if (month[index] == m) {
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
//int getLoopYear(int start_year, int end_year) {
//    return - (start_year / 4 - start_year / 100 + start_year / 400)
//            + (end_year / 4 - end_year / 100 + end_year / 400);
//}
//
//
//int main() {
//    int n;
//    cin >> n;
//    char dot;
//    int index = 1;
//    while (index <= n) {
//        string input_month;
//        int start_day, start_year;
//        cin >> input_month >> start_day >> dot >> start_year;
//        int start_month = getMonth(input_month);
//        int end_day, end_year;
//        cin >> input_month >> end_day >> dot >> end_year;
//        int end_month = getMonth(input_month);
//        cout << start_month << "\t" << end_month << endl;
//        if (start_year == end_year) {
//            if (isLoop(start_year) && start_month <= 2
//                && (end_month > 2 || (end_month == 2 && end_day == 29)))
//                cout << "Case #" << index << ": " << 1 << endl;
//            else
//                cout << "Case #" << index << ": " << 0 << endl;
//        } else {
//            int result = getLoopYear(start_year + 1, end_year - 1);
//            if (isLoop(start_year) && start_month <= 2)
//                result ++;
//            if (isLoop(end_year) && (end_month > 2 || (end_month == 2 && end_day == 29)))
//                result ++;
//            cout << "Case #" << index << ": " << result << endl;
//        }
//        index ++;
//    }
//}