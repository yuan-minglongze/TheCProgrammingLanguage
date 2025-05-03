#include<stdio.h>

/* 当fahr= 0，20，…，300时，分别打印当前华氏温度与摄氏温度对照表*/
main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0; /* 温度表的下限 */
    upper = 300; /* 温度表的上限 */
    step = 10; /* 步长 */

    fahr = upper;

    printf("Temperature Tabel\n");
    while (fahr >= lower)
    {
        celsius = 5 * (fahr - 32) / 9;
        printf("%.0f\t%.3f\n",fahr,celsius);
        fahr -= step;
    }
    
}