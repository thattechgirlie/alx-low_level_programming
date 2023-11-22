#include "3-calc.h"
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
/**
 * op_add - check the code
 * @a: check parameter
 * @b: check parameter1
 * Return: returns addition
 */
int op_add(int a, int b)
{
return (a + b);
}
/**
 * op_sub - check the code
 * @a: check par1
 * @b: check par2
 * Return: returns subtraction
 */
int op_sub(int a, int b)
{
return (a - b);
}
/**
 * op_mul - check the code
 * @a: check par1
 * @b: check par2
 * Return: returns multiplication
 */
int op_mul(int a, int b)
{
return (a * b);
}
/**
 * op_div - check the code
 * @a: check par1
 * @b: check par2
 * Return: returns division
 */
int op_div(int a, int b)
{
return (a / b);
}
/**
 * op_mod - check the code
 * @a: check par1
 * @b: check par2
 * Return: returns modulus
 */
int op_mod(int a, int b)
{
return (a % b);
}
