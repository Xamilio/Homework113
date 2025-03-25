#include <iostream>
#include <cmath>

using namespace std;

void my_increment(int* ptr, int n = 1) 
{
    *ptr += n;
}

void multiply(int* ptr1, int* ptr2, int* result)
{
    *result = (*ptr1) * (*ptr2);
}

void negate(double* ptr)
{
    *ptr = -(*ptr);
}


void setValue(int* ptr, int newValue) 
{
    *ptr = newValue;
}

void concatenateDigits(int* ptr1, int* ptr2, int* result) 
{
    int num1 = *ptr1;
    int num2 = *ptr2;

    int numDigits = 0;
    int temp = num2;
    while (temp > 0)
    {
        numDigits++;
        temp /= 10;
    }

    *result = num1 * pow(10, numDigits) + num2;
}

int main()
{
    int a = 5, b = 3, c = 0;
    double d = 3.14;

    my_increment(&a);
    cout << "a після my_increment: " << a << endl;

    multiply(&a, &b, &c);
    cout << "Результат множення a і b: " << c << endl;

    negate(&d);
    cout << "d після negate: " << d << endl;

    setValue(&a, 100);
    cout << "a після setValue: " << a << endl;

    int result = 0;
    concatenateDigits(&a, &b, &result);
    cout << "Результат concatenateDigits: " << result << endl;

    return 0;
}
