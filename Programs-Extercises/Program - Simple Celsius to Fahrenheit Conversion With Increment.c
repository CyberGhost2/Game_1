/* Temperature Converter Challange
Author: Semin Skodric Novalic
*/

#include <stdio.h>

float func(float start_temp, float end_temp, float step_size)
{

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

int main ()
{
    float start_temp;
    float end_temp;
    float step_size;

    fputs("Enter a start temperature: ", stdout);
    scanf("%f", &start_temp);
    fputs("Enter a end temperature: ", stdout);
    scanf("%f", &end_temp);
    fputs("Enter a step size: ", stdout);
    scanf("%f", &step_size);


    if (start_temp>end_temp)
        puts("Start temperature must be less than end temperature!");

    else if (step_size>(end_temp-start_temp))
        puts("Step size must be less than the difference of start and end temperature!");

    else if (start_temp<end_temp)
        func(start_temp, end_temp, step_size);



}
