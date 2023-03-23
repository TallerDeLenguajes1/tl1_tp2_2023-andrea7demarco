#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct compu {
    int velocidad[5];
    int anio[5];
    int cantidad[5];
    char *tipo_cpu[5];
} typedef Compu;

Compu cargarDatos();
void mostrarDatos(Compu *compu);

int main(){
    
    Compu *p_compu;
    srand(time(0));

}

Compu cargarDatos(){
    Compu compu;
    char tipos[0][5]={'Intel', 'AMD', 'Celeron', 'Athlon', 'Core', 'Pentium'};
    int cpu;
    for(int i = 0; i<5; i++){
        compu.velocidad[i] = 1+rand()%2;
        compu.anio[i] = 2015+rand()%8;
        compu.cantidad[i] = 1+rand()%8;
        *compu.tipo_cpu[i] = tipos[rand()%5];
    }
}

void mostrarDatos(Compu *compu){
    for(int i = 0; i < 5; i++){
        printf("Computadora %d  ",i+1);
        printf("Velocidad: %d", *compu.velocidad[i]);

    }
}

