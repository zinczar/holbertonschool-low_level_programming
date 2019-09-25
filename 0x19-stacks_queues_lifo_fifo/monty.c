#include "monty.h"

/**
 * main - entry point
 * @ac: number of arguments
 * @av: array of arguments
 *
 * Return: exit status
 */
int main(int ac, char **av)
{
	char *buffer = NULL;
	size_t bufsize = 100;
 	char *command_token = NULL;
	char *command_array[100];
	int i = 0, j = 0;
	ssize_t line_length = 0;
	FILE *contents;

	printf("%i\n", ac);

	if(ac == 2)
	{
		contents = fopen(av[1], "r");

		while(getline(&buffer, &bufsize, contents) > 0)
		{
			command_token = strtok(buffer, " ");
			while (command_token != NULL)
			{
				command_array[i++] = command_token;
				command_token = strtok(NULL, " ");
			}
			command_array[i] = NULL;

			printf("%s\n", buffer);
			line_length = getline(&buffer, &bufsize, contents);
			printf("%lu\n", line_length);
			printf("%s\n", buffer);
		}

		while(command_array[j])
		{
			printf("Command_Array[%i]:%s\n", j,command_array[j]);
			j++;
		}
	}
	return(0);
}
