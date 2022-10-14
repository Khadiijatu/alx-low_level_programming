/**
 * print_name - prints a name
 * @name: char pointer
 * @f: fucntion pointer
 */

void print_name(char *name, void (*f)(char *))
{
	if (f)
	{
		f(name);
	}
}
