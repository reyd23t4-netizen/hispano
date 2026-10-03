#include <stdio.h>

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        printf("Uso: hispano <archivo.hsp>\n");
        return 1;
    }

    FILE *archivo = fopen(argv[1], "r");

    if (archivo == NULL)
    {
        printf("Error: no se pudo abrir el archivo '%s'\n", argv[1]);
        return 1;
    }

    printf("Archivo abierto: %s\n\n", argv[1]);

    int caracter;

    while ((caracter = fgetc(archivo)) != EOF)
    {
        putchar(caracter);
    }

    fclose(archivo);

    return 0;
}