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
	int i = 0, j;
	ssize_t line_length = 0;
	FILE *contents;

	printf("ARGC=[%i]\n", ac);

	if(ac == 2)
	{
		contents = fopen(av[1], "r");

		while(getline(&buffer, &bufsize, contents) > 0)
		{
			if (buffer[strlen(buffer) - 1] == '\n')
				buffer[strlen(buffer) - 1] = '\0';
			printf("Buffer Pre-Token:%s\n", buffer);
			command_token = strtok(buffer, " ");
			printf("1st Command Token:%s\n", command_token);

			while (command_token != NULL)
			{
				printf("i=[%i]\n", i);
				command_array[i] = command_token;
				printf("Command_Array[%i]:%s\n", i,command_array[i]);
				printf("Command_Array[0]:%s\n", command_array[0]);
				command_token = strtok(NULL, " ");
				printf("Command Token:%s\n", command_token);
				i++;
			}
			command_array[i] = NULL;
			printf("\n");
		}
	}
	printf("Command_Array[0]:%s\n", command_array[0]);
	printf("Command_Array[1]:%s\n", command_array[1]);
	printf("Command_Array[2]:%s\n", command_array[2]);
	printf("Command_Array[3]:%s\n", command_array[3]);
	printf("Command_Array[4]:%s\n", command_array[4]);

	free(buffer);
	return(0);
}
