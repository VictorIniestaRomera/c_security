#include <stdio.h>
#include <string.h>

void verificar_acceso() {
    int is_admin = 0;       // Variable de control (0 = Falso, 1 = Verdadero)
    char clave[8];          // Búfer de entrada de 8 bytes

    printf("Introduce la clave de acceso: ");
    gets(clave);            // ¡Vulnerabilidad crítica! No comprueba la longitud

    if (is_admin == 1) {
        printf("\n[ÉXITO] Acceso concedido como ADMINISTRADOR.\n");
    } else {
        printf("\n[DENEGADO] Permisos insuficientes.\n");
    }
}

int main() {
    verificar_acceso();
    
    return 0;
}
