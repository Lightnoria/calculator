#include "calculator.h"

int Calculator::Add (double a, double b)
{
    return static_cast<int>(a + b + 0.5);  // Округлення до найближчого цілого
}

int Calculator::Sub (double a, double b)
{
    return Add (a, -b);
}

int Calculator::Mul (double a, double b)
{
    return static_cast<int>(a * b + 0.5);  // Округлення до найближчого цілого
}

double Calculator::Div (double a, double b)
{
    if (b == 0)
    {
        throw "Division by zero error";  // Додано перевірку на ділення на нуль
    }
    return a / b;
}
