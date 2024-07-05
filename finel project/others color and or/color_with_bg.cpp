//color
#include <iostream>
#include <string>

int main(int argc, char ** argv){
    
    printf("\n");
    printf("\x1B[31mTexting\033[0m\t\t"); // red
    printf("\x1B[32mTexting\033[0m\t\t"); // green
    printf("\x1B[33mTexting\033[0m\t\t"); // yellow 
    printf("\x1B[34mTexting\033[0m\t\t"); // perpol
    printf("\x1B[35mTexting\033[0m\n"); // pink
    
    printf("\x1B[36mTexting\033[0m\t\t"); // blue
    printf("\x1B[36mTexting\033[0m\t\t"); //blue
    printf("\x1B[36mTexting\033[0m\t\t"); // blue
    printf("\x1B[37mTexting\033[0m\t\t"); // white
    printf("\x1B[93mTexting\033[0m\n"); // yellow
    
    printf("\033[3;42;30mTexting\033[0m\t\t"); // bg => green OR  text => black
    printf("\033[3;43;30mTexting\033[0m\t\t"); // bg => yellow OR  text => black
    printf("\033[3;44;30mTexting\033[0m\t\t"); // bg => blue OR  text => white
    printf("\033[3;104;30mTexting\033[0m\t\t"); // bg => blue OR  text => white
    printf("\033[3;100;30mTexting\033[0m\n");  // bg => gray OR  text => white

    printf("\033[3;47;35mTexting\033[0m\t\t"); // bg => white OR  text => perpal
    printf("\033[2;47;35mTexting\033[0m\t\t"); // bg => white OR  text => pink
    printf("\033[1;47;35mTexting\033[0m\t\t"); // bg => white OR  text=> perpal
    printf("\t\t");
    printf("\n");

    
    return 0;
}