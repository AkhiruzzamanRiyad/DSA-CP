#include<stdio.h>

int main(){
    int N;
    scanf("%d",&N);

    int score[N];

    for(int i = 0; i<N; i++){
        scanf("%d",score[i]);
    }

    int highest_scr = score[0];

    for(int i = 1; i<N; i++){
       if(highest_scr < score[i]){ 
            highest_scr = score[i];
       }
    }

    printf("%d\n",highest_scr);

    return 0;
}