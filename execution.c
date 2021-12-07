#include "main.h"
/**
 * execute - execute builtins
 * @args: command entered
 * Return: the executing of one of the builtins
 */

int execute(char **args)
{
        int i;

        int (*builtin_func[])(char **) = {
                &cd,
                &help,
                &exit,
                &env,
                &history
};

char *builtin_str[] = {
        "cd",
        "help",
        "exit",
        "env",
        "history"
};


        if (args[0] == NULL)
{
        return (1);
}
        for (i = 0; i <= 4; i++)
{
        if (strcmp(args[0], builtin_str[i]) == 0)
        {
                return ((*builtin_func[i])(args));
        }

}
        return (launch(args));
}
