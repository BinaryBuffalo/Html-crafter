#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

#define BANNER1 "      Baked Binarys HTML Crafter"
#define BUTTON1FUNK "echo \"<!DOCTYPE html>\" >> index.html"
#define BUTTON2FUNK "echo \"<html>\n\t<head>\n\t\t<title>Google<title>\" >> index.html "
#define CLEAR "cls;clear"
#define ART1 "[+]====================[+]"

int main(int argc, char* argv[]){
    char buttonfuncll[120], input[256];

int i = 1;
while (i){
        printf("%s\n", BANNER1);
        printf("   [1]   --> Project Start    \n");
        printf("   [2]   --> HELP   \n");
        printf("   [3]   --> Color Settings");
        printf("\n$ Option ~> ");
scanf("%s", &input);
char input3[256];
        if (!strcmp(input, "1")) {
        printf("   [1]   --> Create Project   \n");
        printf("   [2]   --> Delete Project   \n");
        printf("   [3]   --> Project Contents \n");
        printf("\n$ Option ~> ");
scanf("%s", &input3);
/*                                                */
                    if (!strcmp(input3, "1")){
                        system(BUTTON1FUNK);
                        system(BUTTON2FUNK);
                    printf("\n[DocType Added]\n");
                    printf("\n[Title Added]\n\n");
                    }  
                    if (!strcmp(input3, "2")){
                        system("rm -rf index.html"); 
                        system(CLEAR);
                    printf("Deleted index.html");
                    }
                    if (!strcmp(input3, "3")){
                        printf("\n %s \n", ART1);
                        system("cat index.html");
                    printf("\n %s \n", ART1);
                    printf("\n[complete]\n");
                    }
        }
        if(!strcmp(input, "2")){
                char input2[120];
                printf("[a1] Create Top DOC body title\n");
                //
                printf("\n$ [ a-z : # ]  Option ~> ");
                scanf("%s", input2);
            //
            if(!strcmp(input2, "a1")){
            printf("PAYLOAD 1 ---> \n %s \n %s \n %s \n %s\n", ART1,BUTTON1FUNK,BUTTON2FUNK,ART1);
            }
        }
        if(!strcmp(input, "3")){
            char input4[256];
            printf("Backround, Colors : ~> \n");
            printf("[ blue ] | [purple] | [green] ");
            scanf("%s", input4[256]);
        if(!strcmp(input4, "blue")){
            
        }
        if(!strcmp(input4, "purple")){
            
        }
        if(!strcmp(input4, "green")){
            
        }

        }
}

    return 0;

}