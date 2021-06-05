#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{   int nombreDeMinuscule = 0; // La variable qui va enregistrer le nombre de lettres minuscules
    char chaine[] = "Semi-annuel"; // La chaîne de caractères passée en paramètre
    nombreDeMinuscule = compteurDeMinuscule(chaine); // On stocke le nombre de lettres minuscules dans la variable
    printf("On a %d lettres muniscules dans The first project",nombreDeMinuscule);
    return 0;
}
//déclaration de la Fonction
int compteurDeMinuscule(char chaine[])
{
    char character=0;
    int i=0;
    int compteur=0;
    do
    {
       character = chaine[i];
       if ((character>=97)&&(character<=122))//j'ai utilisé le codage ASCII
       {
           compteur++;
       }
       i++;
    }
    while(character != '\0');

    return compteur;
}


