#include "module.h"

int init(void) {
    // return 0 if everything is ok
    return 0;
}

int deinit(void) {
    // return 0 if everything is ok
    return 0;
}

// create command function
char *command() {
    // return string
    return "Hello World!";
}

// create commands array
struct Command commands[] = {
        {"module_command", 0, &command}
};

// create module_main function
int module_main(struct Module *module) {
    // set module name
    module->name = "example_module";
    // set module version
    module->version = "1.0.0";
    // set module init function
    module->init = &init;
    // set module deinit function
    module->deinit = &deinit;
    // set module commands
    module->commands = commands;
    // set module commands count
    module->commands_count = sizeof(commands) / sizeof(struct Command);

    // return 0 if everything is ok
    return 0;
}
