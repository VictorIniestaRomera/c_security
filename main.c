#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void verificar_acceso() {
    bool is_admin = false;       // Variable de control (0 = Falso, 1 = Verdadero)
    char clave[9];          // Búfer de entrada de 8 bytes
    
    printf("Introduce la clave de acceso: ");
    char checkClave[9];

    if (fgets(checkClave, sizeof(checkClave), stdin) != NULL) {
        checkClave[strcspn(checkClave, "\n")] = '\0';

        if (strlen(checkClave) == 8) {
            strcpy(clave, checkClave);

            printf("[CORRECTO] clave valida\n");
            printf("clave: ");
            printf(clave);
        }
        else {
            printf("[ERROR] clave no valida");
        }
    }

    if (is_admin == 1) {
        printf("\n[ÉXITO] Acceso concedido como ADMINISTRADOR.\n");
    } else {
        printf("\n[DENEGADO] Permisos insuficientes.\n");
    }
}

int main() {
    printf("El tamaño de _Bool es: %zu byte(s)\n", sizeof(_Bool));
    printf("El tamaño de int es: %zu byte(s)\n", sizeof(int));

    verificar_acceso();

    return 0;
}
