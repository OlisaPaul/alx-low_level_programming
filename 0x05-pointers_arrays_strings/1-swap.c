/**
 * swap_int - swaps the value of variable a for variable b and vice versa.
 * @a: pointer a
 * @b: pointer b
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
    *a = *b;
    *b = *a;
}
