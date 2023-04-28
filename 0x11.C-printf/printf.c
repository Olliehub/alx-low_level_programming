#include "main.h"

void print_buffer(char buffer[], int *buff_ind);
/**
 * _printf - printf function
 * @format: format to be used
 *
 * Return: return printed chars on success
 */

int _printf(const char *format, ...)
{
	int i, printed = 0, printed char = 0;
	int flags, width, precision, size, buff_ind = 0;
	va_list list;
	char buffer[BUFF_SIZE];

	if (format == NULL)
		return (-1);

	va_start(list, format);

	for (a = 0; format && format[a] != '\0'; a++)
	{
		if (format[a] != '%')
		{
			buffer[buff_ind++] = format[a];
			if (buff_ind == BUFF_SIZE)
				print_buffer(buffer, &buff_ind);
			/* write(1, &format[a], 1);*/
			printed_char++;
		}
		else
		{
			print_buffer(buffer, &buff_ind);
			flags = get_flags(format, &a);
			width = get_precision(format, &a, list);
			size = get_size(format, &a);
			++a;
			printed = handle_print(format, &i, list, buffer,
					flags, width, precision, size);
			if (printed == -1)
				return (-1);
			printed_char += printed;
		}
	}

	print_buffer(buffer, &buff_ind);

	va_end(list);

	return (printed_char);
}

/**
 * print_buffer - Prints the contents of the buffer if it does exit
 * @buffer: represents an array of chars
 * @buff_ind: index at which the next char needs to be added,
 * represents the length.
 */

void print_buffer(char buffer[], int *buff_ind)
{
	if (*buff_ind > 0)
		write(1, &buffer[0], *buff_ind);
	*buff_ind = 0;
}
