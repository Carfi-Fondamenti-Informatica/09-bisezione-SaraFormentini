#include <iostream>
#include <cmath>
using namespace std;

float f(float y){
    return y*y*cos(y)+1;
}

int main() {
    float a=0, b=0,x;
    double err=0;
    do {
        cout << "inserire estremi" << endl;
        cin >> a >> b;
    } while (f(a) * f(b) >= 0);

    do {
        x = (a + b) / 2;

        if (f(x) != 0) {
            if (f(a) * f(x) < 0) {
                b = x;
            } else {
                a = x;
            }
            err = (abs((b - a) / 2));
        } else if (f(x)==0){
            break;
        }
    }while (err >= 1e-6);
    cout << int(x * 10000) / 10000.0 <<endl;



        return 0;
}
