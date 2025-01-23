#include "conversion.h"

// TEMPERATURE

double celsiusTOfarenith(double parametro1)
{

    double result = (parametro1 * 9) / 5 + 32;

    return result;
}

double farenithTOcelsius(double parametro1)
{

    double result = (parametro1 - 32) * 5 / 9;

    return result;
}

// VALUTE

double euroTOdollaro(double parametro1)
{

    double result = parametro1 * 1.04;

    return result;
}

double dollaroTOeuro(double parametro1)
{

    double result = parametro1 / 1.04;

    return result;
}