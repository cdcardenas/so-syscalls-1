#define DIVISOR 1000000000L

#include<stdio.h>
#include<time.h>

void main(void)
{
time_t tiempo;
struct timespec inicio, fin;


clock_gettime(CLOCK_REALTIME, &inicio);

sleep(5);

clock_gettime(CLOCK_REALTIME, &fin);

double total = ( fin.tv_sec - inicio.tv_sec ) + ( fin.tv_nsec - inicio.tv_nsec) / DIVISOR;

printf("El tiempo que transcurrio en segundos fue: %1f\n", total);

}

