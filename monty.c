#include "monty.h"
#include <stdio.h>
#include <cstdio.h>
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
