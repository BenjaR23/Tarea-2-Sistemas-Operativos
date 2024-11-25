#include "../kernel/types.h"
#include "user.h"

int main(void) {
    int i;
    for(i = 0; i < 20; i++) {
        if(fork() == 0) {
            // Código del proceso hijo
            printf("Ejecutando proceso %d\n", getpid());

            // Simulamos un trabajo, por ejemplo, durmiendo por 100 unidades de tiempo
            sleep(100);

            // Termina el proceso hijo
            exit(0);
        }
    }

    // Esperamos a que todos los procesos hijos terminen
    for(i = 0; i < 20; i++) {
        int status;
        wait(&status);  // Espera el estado del hijo
    }

    exit(0);
}

