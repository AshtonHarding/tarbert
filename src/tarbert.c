/* tarbert.c */
#include <stdio.h>
#include <curl/curl.h>

char check_user_input(string);

char check_user_input( char *string )
{
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
    printf("The argument is:%s\n", string);
    return string;
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
