#include <iostream>
#include <cmath>
using namespace std;

float f(float y){
    return y*y*cos(y)+1;
}

int main() {
    float a=0, b=0, err,x;
    do {
        cout << "inserire estrmi" << endl;
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
            err = abs((b - a) / 2);
        }
    }while (err >= 1e-6);
        int z=(x*1000);
        cout<<float(z)/1000;



        return 0;
}
