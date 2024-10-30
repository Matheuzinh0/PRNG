#include <stdio.h>
#include <stdint.h>
#include <math.h>
#include <unif01.h>
#include <bbattery.h>
#include <ufile.h>
static double nb = pow(2,24);
static int r = 0;
static int s = 32;

int main(){
unif01_Gen * gen;
gen= ufile_CreateReadBin ("TESTU01/PRNG2_m32_l4.bin",32);
void ufile_InitReadBin ();
bbattery_Rabbit(gen,nb);
bbattery_Alphabit(gen,nb,r,s);


ufile_DeleteReadBin (gen);
  

    return 0;
}

