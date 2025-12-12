#include "math_library.h"

int addition(int a, int b, long long &result)
{
    result = a + b;
    return 0;
}
int math_operations::subtraction(int a, int b, long long &result)
{
    result = a - b;
    return 0;
}
int math_operations::multiplication(int a, int b, long long &result)
{
    result = a * b;
    return 0;
}
int math_operations::division(int a, int b, long long &result)
{
    if (b == 0)
    {
        return -1;
    }
    result = a / b;
    return 0;
}
int math_operations::exponentiation(int a, int b, long long &result)
{
    if (b < 0)
    {
        return -1;
    };
    result = 1;
    for (size_t i = 0; i < b; ++i)
    {
        result *= a;
    }
    return 0;
}
long long math_operations::factorial(unsigned int a)
{
    if (a > 1)
    {
        return a * (factorial(a - 1));
    }
    return 1;
}
