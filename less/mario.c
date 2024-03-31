#include <cs50.h>
#include <stdio.h>

int main(){

    int height = 0;

    do{
    height = get_int("Height: ");
    if(height > 0 && height <=8){
        for (int i = 0 ; i < height; i++){
            for(int j = 0 ; j < height; j++){
                if (height - j > i+1){
                    printf(" ");
                }else{
                    printf("#");
                }
            }
         printf("\n");
        }
    }
    }while(height <= 0 || height > 8);
}