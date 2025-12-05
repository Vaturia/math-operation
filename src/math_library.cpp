#include "math_library.h"
#include <cstdlib>
int addition(int a, int b, long long &result)
{
    result = a + b;
    return 0;
}
int subtraction(int a, int b, long long &result)
{
    result =  a - b;
    return 0;
}
int multiplication(int a, int b, long long &result)
{
    result = a * b;
    return 0;
}
int division(int a, int b, double &result)
{
    if(b == 0)
    {
        return -1;
    }
    result = a / b;
    return 0;
}
int exponentiation(int a, int b, long long &result)
{
    if(b < 0) {return -1;};
    result = 1;
    for(size_t i = 0; i < b; ++i)
    {
        result*= a;
    }
    return 0;
}
long long factorial(unsigned int a)
{   
    if(a > 1)
    {
        return a * (factorial(a - 1));
    }
    return 1;
}
