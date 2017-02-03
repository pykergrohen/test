#include <stdio.h>
#include <stdlib.h>
#define TAILLE 7

typedef struct jeton{
int x;
int y;

}jeton;

void init(int tabcar[TAILLE][TAILLE]);
int avancey(int pointy);
int recherchevide(int tabcar[TAILLE][TAILLE], int pointx, int pointy);
int avancedroite(int tabcar[TAILLE][TAILLE], int pointx, int pointy);

int main()
{
int i;
int pointx;
int pointy;
int direction=1;
int pas=0;
int tabcarre[TAILLE][TAILLE];

init(tabcarre); //met toutes les cases à zero
pointx=trunc(TAILLE/2); //obtient le centre du tableau en x
pointy=trunc((TAILLE/2)-1); //obtiens la case au dessus du centre en y
printf("%i\n",pointx);
printf("%i\n",pointy);
tabcarre[pointx][pointy]=1; //on se place au centre, on remonte de 1 et on initialise à 1
printf("%i\n",tabcarre[3][2]);

for (i=0;i<10;i++){ //testes la fonction avancey
pointy=avancey(pointy);
printf("Pointy vaut %i\n",pointy);
}
return 0;
}

void init(int tabcar[TAILLE][TAILLE]){
    int i;
    int j;
    for (i=0;i<TAILLE;i++){
        for (j=0;j<TAILLE;j++){
            tabcar[i][j]=0;
        }
    }
}

int avancey(int pointy){

    pointy=pointy-1;
    if (pointy<0){
        pointy=6;
    }
    return pointy;
}

int recherchevide(int tabcar[TAILLE][TAILLE], int pointx, int pointy){

        while (tabcar[pointx][pointy] !=0){
            pointy=avancey(pointy);
            if (tabcar[pointx+1][pointy]!=0){
                //avancegauche, qui fait pointx-1 puis modifie les pointeurs pour pointx et pointy du prog principal
            }else{
                //avancedroite, qui modifie les pointeurs pour pointx (qui devient pointx+1) et pointy du prog principal
            }

        } //de la on est sur la bonne case et on la fait équivaloir au pas, puis pas=pas+1;
        return pointx;
}

int avancedroite(int tabcar[TAILLE][TAILLE], int pointx, int pointy){

}
