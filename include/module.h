//
// Created by medzik on 4/4/23.
//

#ifndef MODULES_API_MODULE_H
#define MODULES_API_MODULE_H

#include "command.h"

// Module API struct
struct Module {
    char *name;
    char *version;
    int (*init)(void);
    int (*deinit)(void);

    // Commands array
    struct Command *commands;
};

// Module API function
int module_main(struct Module *module);

#endif //MODULES_API_MODULE_H
