#include "3-calc.h"
/**
 * main - Entry point
 *@argc: Count of args
 *@argv: Array of args
 *Return: Result of operand
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;
	int (*func)(int, int);

	/* Si tiene Argumentos distintos a 4 (Nombre - Num1 - Op - Num2) */
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	/* Trabajamos los parametros */
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	/* Si intentan dividir o modulo entre de 0*/
	if ((argv[2][0] == '/' || argv[2][0] == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	/* Enviamos el operando para seleccionar la funci√n de la operaco√ */
	func = get_op_func(argv[2]);
	/* Si el operando no esta en la lista, get_op_func retorna NULL */
	if (*func == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	/* Si todo esta correcto, llamamos a la funcion y retornamos el resultado*/
	result = func(num1, num2);
	printf("%i\n", result);
	return (result);
}
