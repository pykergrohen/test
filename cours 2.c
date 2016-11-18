/* Cours de C LEVEL 2

passage par adresses et passage par valeurs.


si procédure somme(a,b) qui fait a+b et l'affiche on appelle l'appel habituel un passage par valeurs.
Si c etait une fonction que l'on appelle via un printf ça serait aussi un passage par valeurs.
int a=10;
int b=10;

procedure ou fonction (int a,int b)
	a+b
int somme(int a, int b){
    return a+b;
}

on appelle & l'adresse ou la référence de la variable et * le pointeur de variable

int *pta=&a;

si on écrivait printf("%d",a) on aurait 10, si on affichait "%d",*pta on aurait aussi 10

si on modifiait *pta on modifierait également a par la même occasion

il faut cependant faire attention à certaines choses, un pointeur ne peut jamais avoir une valeur numérique.
