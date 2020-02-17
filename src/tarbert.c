/* tarbert.c */
#include <stdio.h>
#include <curl/curl.h>

char check_user_input(char *string);
void help_menu();

void help_menu(void)
{
    printf("tarbert: A package manager.\n");
    printf("Usage:\n");
    printf("tarbert [ options ] [ software name ]\n");
    printf("tarbert --help\n");
    printf("Options:\n");
    printf("            [ -i, --install ]\n");
    printf("            [ -h, --help ]\n");
    printf("    For more help, refer to the README.md file\n");
}

char check_user_input( char *string )
{
    /* TODO: I have to use MAGIC.NUMBERS. for the string.
     *       This is unacceptable. I need to figure out why
     *       I cannot simply use `if(string=="-h"){}` - ash */
    if (string[1] == 104)
    {
        help_menu();
    }
    else if (string[1] == 105)
    {
        printf("In a cruel twist of fate. You can't use this yet.\n");
    }
    /* Check user input.*/
    /* IF (string == "help")
     *          Display help menu. 
     * IF (string == "install")
     *          Check input against database
     *          and if already installed
     *          and if not, begin install process.
     * IF (string == "update")
     *          Update database list [if possible],
     *          Create an array from all installed
     *          software, 
     *          Check against versions,
     *          Install updates.
     * IF (string == "???")
     *          ???
     * */
    return 0;
}

/* TODO: Check user input against database. */

/* Database must contain dependencies + lists to
 * those files. */

/* TODO: `curl -O $pkg`  || <curl/curl.h> */
/* SEE: /usr/include/curl/ */


/* TODO: Compile file. Move them to specified location. */



int main(int argc, char *argv[])
{
    printf("Hello.\n");
    if(argc == 2)
    {
        check_user_input(argv[1]);
    }

    return 0;
}
