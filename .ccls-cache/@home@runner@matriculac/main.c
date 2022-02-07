#include <stdio.h>

int main() {
   int matricula[5], i, j, auxMat;
    float media[5], auxMedia;

    for(i=0; i<5; i++){
          printf("\nDigite a matrícula:\n");
          scanf("%d", &matricula[i]);

          printf("\nDigite a média:\n");
          scanf("%f", &media[i]);

    }
    for(i=0; i<5; i++){
        for(j=i+1; j<5; j++){
            if(media[i] < media[j]){
                auxMedia = media[i];
                media[i] = media[j];
                media[j] = auxMedia;
                auxMat = matricula[i];
                matricula[i] = matricula[j];
                matricula[j] = auxMat;
            }
        }
    }
    printf("\n\t---Matrícula-- \t  ---media--\n");
    for(i=0; i<5; i++){
        printf("%d\t\t", matricula
        [i]);
        printf("%f\n", media[i]);
    }


  return 0;
}