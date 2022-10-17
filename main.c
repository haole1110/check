// // main.c
// #include <stdio.h>
// #include "readline.h"
// #include "readline.c"
// #include "factorial.c"
// #include "factorial.h"
// #include <string.h>


// int main (int argc, char *argv[]){
//     char str[50];
//     int temp = 0, i = 0;
//     fgets(str, 50, stdin);
//     if (read_line(str)){
//         while (str[i] != '\0' && str[i] != '\n'){
//             temp = temp*10 + str[i] - '0';
//             i++;
//         }
//         printf("%d\n", factorial(temp));
//     }
//     else {
//         printf("%d\n", -1);
//     }
//     return 0;
// }

#include <sys/types.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int value = 5 ;
int main ( )
{
int pid ;
pid = fork();
if (pid == 0) { 
value += 15;
return 0;
}
else if (pid > 0 ) { 
wait(NULL) ;
printf("PARENT:  val u e =%d" , value);
return 0 ;
}
}