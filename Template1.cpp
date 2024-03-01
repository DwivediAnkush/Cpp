#include<iostream>
using namespace std;

template <class T>
class vector {
public:
    T* arr;
    int size;

    vector(int m) {
        size = m;
        arr = new T[size];
    }

    T sumVec(const vector& v) {
        T d = 0;
        for (int i = 0; i < size; i++) {
            d += arr[i] * v.arr[i];
        }
        return d;
    }
};

int main() {
    vector<float> v1(3);
    v1.arr[0] = 0.4;
    v1.arr[1] = 3.0;
    v1.arr[2] = 1.9;

    vector<float> v2(3);
    v2.arr[0] = 0.1;
    v2.arr[1] = 0.9;
    v2.arr[2] = 4.1;

    float a = v1.sumVec(v2);
    cout << a << endl;

    return 0;
}
