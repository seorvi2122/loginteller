/* loginteller.c
 * Based on monousuar.c at http://www.binefa.net/gnu/gcc/processos/Informacio_d_usuari.html
 * www.binefa.cat
 * 20210927
*/
#include <stdio.h>
#include <unistd.h>    // getlogin()
#include <stdlib.h>    // exit()

int main(){
    char *szUsername;
   
    if((szUsername = getlogin())==NULL){
        perror("getlogin");
        exit(EXIT_FAILURE);
    }  
    printf("Your username at the system is : %s\n",szUsername);

    return (0);
}
