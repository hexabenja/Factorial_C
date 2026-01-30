// Agradecimientos por el código original:  https://github.com/bernardoeuler
// Ajustes y documentación en Español realizadas en este commit.
// Compilar en UNIX usando: gcc factorial.c -o Factorial -lgmp
// Ejecutar en UNIX usando: ./Factorial

#include <stdio.h>
#include <gmp.h>
#include <stdlib.h>
#include <assert.h>

int main(int argc, char * argv[])
{
    mpz_t factorial_n; // Registra en stack nueva variable de GMP factorial_n donde se guardan valores
    unsigned long int n = 120; // Ingresar valor positivo a 0 como Factor de multiplicación de factorial.
    mpz_init(factorial_n); // Inicializa el valor factorial_n en el stack, función exclusiva de GMP 
    
    mpz_fac_ui(factorial_n, n); /* factorial_n = n! */ // GMP realiza de forma nativa la función con la variable ya inicializada más el valor "n"

    printf("Factorial de %i = ",n); // Realizar el print de valor %i que es el valor unsigned N más el valor de n
    mpz_out_str(stdout,10,factorial_n); // Realiza el valor de salida factorial_n en base de 10
    printf("\n"); // Realiza el print de valor N antes haciendo una newline con /

    mpz_clear(factorial_n); // Después de printear valor númerico limpia residuos en memoria

    return 0; // Finaliza programa en C
}
