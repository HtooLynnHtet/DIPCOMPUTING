//
// Created by Alpha zeec on 12/11/2022.
//
#include <stdio.h>
int winhtut[7]={119,105,110,104,116,117,116};
int my_arr[7]={132,241,513,212,123,246,281};

void readFILE();

int main(){
    printf("Starting...\n");
    readFILE();
    printf("\nDONE\n");
    return 0;
}

void readFILE(){
    //w-119,i=105;n=110,h=104;t=116;u=117;
    FILE *fptr;
    fptr = fopen("words.txt","r");
    int count = 0;
    int i =0;

    char c = fgetc(fptr);
    while(!feof(fptr)){
        my_arr[i] = c;
        c = fgetc(fptr);

        if(i==6){
            int idn1=0;
            for(int d = 0;d<7;d++){
                if(my_arr[d] == winhtut[d]){
                    idn1++;
                }
            }
            if(idn1 == 7){
                count++;
            }
            i=i-6;
        }
        i++;
    }
    fclose(fptr);
    printf("total Num of winhtut : %d",count);
}