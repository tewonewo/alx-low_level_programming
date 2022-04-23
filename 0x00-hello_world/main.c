<<<<<<< HEAD
#include <stdio.h>

/**
* main - entry point
* 
* Return: Always 0 (Success)
*/
int main(void)
{
	return (0);
}

=======
#!/bin/bash 
# Simply a wrapper script to keep you from having to use betty-style 
# and betty-doc separately on every item. 
# Originally by Tim Britton (@wintermanc3r), multiargument added by 
# Larry Madeo (@hillmonkey) 
 
BIN_PATH="/usr/local/bin" 
BETTY_STYLE="betty-style" 
BETTY_DOC="betty-doc" 
 
if [ "$#" = "0" ]; then 
    echo "No arguments passed." 
    exit 1 
fi 
 
for argument in "$@" ; do 
    echo -e "\n========== $argument ==========" 
    ${BIN_PATH}/${BETTY_STYLE} "$argument" 
    ${BIN_PATH}/${BETTY_DOC} "$argument" 
done
>>>>>>> 53ce884b56513bf7c3ba4031b5a622c477d15fd3
