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
	char line_content[MAX_LINE_LENGHT];
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

	while (fgets(line_content, sizeof(line_content), monty_file) != NULL)
	{
		line_number++;
		line_len = strlen(line_content);

		if (line_len > 0 && line_content[line_len - 1] == '\n')
		{
			line_content[line_len - 1] = '\0';
		}
	}
	printf(line_content);

	fclose(monty_file);

	return (0);
}
