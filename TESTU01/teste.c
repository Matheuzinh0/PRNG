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
gen= ufile_CreateReadBin ("/home/matheus/Área de Trabalho/hénon_map/arnold.bin",32);
void ufile_InitReadBin ();
bbattery_BlockAlphabit(gen,nb,r,s); // bbattery_RabbitFile("/home/matheus/Área de Trabalho/Resultados z32/prngz32l4_Alphabit.bin",nb);

ufile_DeleteReadBin (gen);
  

    return 0;
}

