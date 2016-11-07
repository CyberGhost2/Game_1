
#include <stdio.h>

int main ()
{
    float start_temp;
    float end_temp;
    float step_size;
    float fahrenheit;

    fahrenheit= (start_temp*1.8)+32;

    fputs("Enter a start temperature °C: ", stdout);
    scanf("%f", &start_temp);
    fputs("Enter a end temperature °C: ", stdout);
    scanf("%f", &end_temp);
    fputs("Enter a step size: ", stdout);
    scanf("%f", &step_size);

    if (scanf
    {
        fputs("Start temperature must be lower than end temperature!", stdout);
        continue;
    }

    if (start_temp<end_temp)
    {
    fputs("\n Celsius     Fahrenheit \n", stdout);
    fputs(" --------   ------------\n", stdout);
    printf("  %.2f        %.2f\n", start_temp, (start_temp*1.8)+32);
    }

    while (start_temp<end_temp)
    {
    start_temp += step_size;
    printf("  %.2f        %.2f\n", start_temp, (start_temp*1.8)+32);
    }


}
