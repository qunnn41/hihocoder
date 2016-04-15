#include <iostream>
#include <vector>

using namespace std;

template <class T>
class SumPowers {
private:
    int Power;
public:
    SumPowers(int p): Power(p) {}
    const T operator() (const T& total, const T& value) {
        T v = value;
        for (int i = 0; i < Power - 1; ++i)
            v = v * value;
        return total + v;
    }
};
template <class T>
void Print(T first, T last) {
    for (; first != last; ++first)
        cout << *first << endl;
    cout << endl;
}

int sumSquares(int total, int value) {
    return total + value * value;
}
int accumulate(vector<int>::iterator first, vector<int>::iterator last, int init, int (*op)(int, int)) {
    for (; first != last; ++ first)
        init = op(init, *first);
    return init;
}

int accumulate(vector<int>::iterator first, vector<int>::iterator last, int init, SumPowers<int> op) {
    for (; first != last; ++ first)
        init = op(init, *first);
    return init;
}
int main() {
    const int Size = 10;
    int a[] = {1,2,3,4,5,6,7,8,9,10};
    vector<int> v(a, a + Size);
    Print(v.begin(), v.end());
    int result = accumulate(v.begin(), v.end(), 0, SumPowers<int>(3));
    cout << result << endl;
    result = accumulate(v.begin(), v.end(), 0, sumSquares);
    cout << result << endl;
    result = accumulate(v.begin(), v.end(), 0, SumPowers<int>(4));
    cout << result << endl;
}