#include <stdio.h>
#include <stdlib.h>

int main(void) {
    printf("Hola, C!\n");
    printf("Plantilla lista para proyectos serios.\n");
    
    int *ptr = malloc(sizeof(int));
    if (ptr == NULL) {
        fprintf(stderr, "Error: no se pudo asignar memoria\n");
        return EXIT_FAILURE;
    }
    
    *ptr = 42;
    printf("Valor: %d\n", *ptr);
    
    free(ptr);
    return EXIT_SUCCESS;
}
