#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv){
    char cat[] = "cat ";
    char *command;
    size_t commandLenght;

    commandLenght = strlen(cat) + strlen(argv[1]) + 1;
    command = (char *)malloc(commandLenght);
    strncpy(command, cat, commandLenght);
    strncat(command, argv[1], (commandLenght - strlen(cat)));

    system(command);
    return (0);
}