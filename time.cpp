#include <iostream>
using namespace std;

class Time {
    int hr, min, sec;

public:
    void input() {
        cout << "Enter hours: ";
        cin >> hr;

        cout << "Enter minutes: ";
        cin >> min;

        cout << "Enter seconds: ";
        cin >> sec;
    }

    void display() {
        cout << hr << " : " << min << " : " << sec;
    }

    Time add(Time t) {
        Time temp;

        temp.sec = sec + t.sec;
        temp.min = min + t.min + temp.sec / 60;
        temp.sec = temp.sec % 60;

        temp.hr = hr + t.hr + temp.min / 60;
        temp.min = temp.min % 60;

        return temp;
    }

    Time sub(Time t) {
        Time temp;

        int total1 = hr * 3600 + min * 60 + sec;
        int total2 = t.hr * 3600 + t.min * 60 + t.sec;

        int diff = total1 - total2;

        temp.hr = diff / 3600;
        diff = diff % 3600;

        temp.min = diff / 60;
        temp.sec = diff % 60;

        return temp;
    }
};

int main() {
    Time t1, t2, sum, difference;

    cout << "Enter first time:\n";
    t1.input();

    cout << "\nEnter second time:\n";
    t2.input();

    sum = t1.add(t2);
    difference = t1.sub(t2);

    cout << "\nAddition = ";
    sum.display();

    cout << "\nSubtraction = ";
    difference.display();

    return 0;
}
