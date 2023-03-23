// codigo a completar
#include<stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 20

int main(){

int i;
double *punt_vt;
double vt[N];

punt_vt=&vt[0];
srand(time(0));

for(i = 0; i < N; i++){
    *punt_vt=1+rand()%100;
    printf("%.2f\n", *punt_vt);
    punt_vt++;
    }

  return 0;
}
