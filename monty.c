#include "monty.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * main - code interpreter for stack/queue
 * @argc: argument count
 * @argv: file location
 * Return: 0 if successful
 */

int main(int argc, char *argv[])
{
        FILE *monty_file;
	char line[MAX_LINE_LENGHT];
	int line_number = 0;
	size_t len;

        if (argc != 2)
        {
                fprintf(stderr, "USAGE: monty file\n");
                exit(EXIT_FAILURE);
        }

        monty_file = fopen(argv[1], "r");

        if (monty_file == NULL)
        {
                fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
                exit(EXIT_FAILURE);
        }

	while (fgets(line, sizeof(line), monty_file) != NULL)
	{
		line_number++;
		len = strlen(line);

		if (len > 0 && line[len - 1] == '\n')
		{
			line[len - 1] = '\0';
		}
	}

	fclose(monty_file);

	return (0);
}
