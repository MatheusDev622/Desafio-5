#include <stdio.h>
#define TAM 5
int main(){
    float  vet_notas[TAM];
    for(int i = 0;i < TAM;i++){
        printf("digite a Nota da AV%d:",i+1);
        scanf("%f",&vet_notas[i]);
    }

    float media_final = (vet_notas[0]+vet_notas[1]*3+vet_notas[2]*2+vet_notas[3]+vet_notas[4]*3)/10;

    if(vet_notas[4] == 0 && media_final < 7){
        float nota_parcial = (vet_notas[0]+vet_notas[1]*3+vet_notas[2]*2+vet_notas[3]);
        float nota_av5 = (7 * 10) - nota_parcial;
        nota_av5 = nota_av5/3;
        printf("Nota final %.2f\nNota da AV5 para alcançar a media: %.2f",media_final,nota_av5); 
    }else if(vet_notas[4]!= 0 && media_final < 7 && media_final >= 3){
        printf("Media final %.2f, AF!",media_final);
    }else if(vet_notas[4] != 0 && media_final < 3 ){
        printf("Media final %.2f, reprovado!",media_final);
    }else{
        printf("Media final %.2f,aprovado!",media_final);
    }

    return 0; 
}