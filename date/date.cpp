﻿#include <iostream>
#include "date.h"

using namespace std;

int main()
{
    bool result;
    Date A(2003, 1, 7);

    Date B(2003, 2, 5);
    Date C;

    cout << "A: " << A.getDate() << endl;
    cout << "B: " << B.getDate() << endl;
    cout << "C: " << C.getDate() << endl;
    ++C;
    cout << "++C: " << C.getDate() << endl;
    C++;
    cout << "C++: " << C.getDate() << endl;
    --C;
    cout << "--C: " << C.getDate() << endl;
    C--;
    cout << "C--: " << C.getDate() << endl;
    C = C + 10;
    cout << "C = C+10: " << C.getDate() << endl;
    C = C - 10;
    cout << "C = C-10: " << C.getDate() << endl;
    C += 5;
    cout << "C += 5: " << C.getDate() << endl;
    C -= 5;
    cout << "C -= 5: " << C.getDate() << endl;

    result = A < B;
    cout << "A < B : " << result << endl;
    result = A > B;
    cout << "A > B : " << result << endl;
    result = A <= B;
    cout << "A <= B : " << result << endl;
    result = A >= B;
    cout << "A >= B : " << result << endl;
    result = A == B;
    cout << "A == B : " << result << endl;
    result = A != B;
    cout << "A != B : " << result << endl;

}