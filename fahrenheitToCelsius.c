#include <stdio.h>

double getFahTemp()
{
    double fahTemp;
    printf("Enter a Fahrenheit temperature to recieve the equivalent celsius temperature:\n");
    scanf("%lf", &fahTemp);
    return fahTemp;
}

double changeToCelsius(double fahTemp)
{
    return ((fahTemp - 32.0) / 1.8);
}

void displayCelTemp(double fahTemp, double celTemp)
{
    printf("%.2f degrees Fahrenheit is equivalent to %.2f degrees Celsius.\n", fahTemp, celTemp);
}

int main()
{
    double fahTemp = getFahTemp();
    double celTemp = changeToCelsius(fahTemp);
    displayCelTemp(fahTemp, celTemp);
}