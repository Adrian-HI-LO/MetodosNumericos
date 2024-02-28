#include <stdio.h>
int main()
{
    printf("Problema Uno\n");
    double a = 1.0 / 3.0;
    double b = 3.0 / 5.0;
    double c = 1.0 / 30.0;
    double d = 23.0 / 30.0;
    double operacion = a + b + c / d; //((a + b + c) / d)
    printf("La operacion es: %.4lf\n", operacion);
    printf("\n");
    //
    printf("Problema Dos\n");
    double operacionDos = 5.0 + (2.0 / (1.0 / (1 + (2.0 / (2.0 - (1.0 / 4.0)))))); //((5 + (2.0/1))/(1+(2/(2-(1/4)))));
    printf("La operacion dos: %.3lf\n", operacionDos);
    return 0;
}
//Token Tabnine: eyJhbGciOiJSUzI1NiIsInR5cCI6IkpXVCJ9.eyJhdWQiOiJodHRwczovL2lkZW50aXR5dG9vbGtpdC5nb29nbGVhcGlzLmNvbS9nb29nbGUuaWRlbnRpdHkuaWRlbnRpdHl0b29sa2l0LnYxLklkZW50aXR5VG9vbGtpdCIsImlhdCI6MTcwOTA4NTM5MiwiZXhwIjoxNzA5MDg4OTkyLCJpc3MiOiJmaXJlYmFzZS1hZG1pbnNkay02cjM0eUB0YWJuaW5lLWF1dGgtMzQwMDE1LmlhbS5nc2VydmljZWFjY291bnQuY29tIiwic3ViIjoiZmlyZWJhc2UtYWRtaW5zZGstNnIzNHlAdGFibmluZS1hdXRoLTM0MDAxNS5pYW0uZ3NlcnZpY2VhY2NvdW50LmNvbSIsInVpZCI6InFqRGl6ME95SGFoZHFVdldneHI5eGE1UlpCQjIifQ.Lvogv1V122r5ABZ5dn4tpRNoF4x-KncoPyxqbH4AAvFJ_fxBgkeYKFkEbJBKOERvpOOUY6seudoe8YWKwrk4ZIxkR9zlh8FVeodMCu8cbRo41jMqPJD1zn-7obNhti1M9V0d729euMNeSPj86GtyJqbd2O5VEtw4U9-jPRYJcQJHpooUVcJ98gTrLg999PNfaADMmpTwvKi47MaPu0YoQ6MEn8tWKUbfmkSIGS5PCiFt29S7m0A4y8fyI7ifatHf0lysQlQ9ZqFUZwSDc8NoUzLWr56gHKYSN_K3O_1zUVri_CpH-d1NX49Y7Kj2dl9qXMGT-rwW7YzyRrmKAYfLGA