#include <cs50.h>
#include <stdio.h>

int main(){

    int height = 0;

    do{
    height = get_int("Height: ");
    if(height > 0 && height <=8){
        for (int i = 1 ; i <= height; i++){
            for(int j = 0 ; j <= height*2; j++){
                if (height - j > i || j - height > i){
                    if(j - height > i){
                        printf("\n");
                        break;
                    }
                    printf(" ");
                }else if(j == height){
                    printf("  ");
                }else{
                    printf("#");
                }
            }
            if(i == height){
                printf("\n");
            }
        }
    }
    }while(height <= 0 || height > 8);
}