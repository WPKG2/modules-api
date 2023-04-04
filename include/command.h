//
// Created by medzik on 4/4/23.
//

#ifndef MODULES_API_COMMAND_H
#define MODULES_API_COMMAND_H

// Command struct
struct Command {
    char *name;
    int min_args;
    char *(*function)(int argc, char **argv);
};

#endif //MODULES_API_COMMAND_H
