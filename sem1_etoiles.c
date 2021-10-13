// Dessiner des étoiles
////1. Ecris un programme qui calcule les coordonnées (x, y) pour dessiner une étoile à 5 branches, avec un rayon exterieur de 100 et un rayon interieur de 50.
////2. Mets ce code dans une fonction à part, et appelle cette fonction depuis ta fonction main.
////3. Généralise ta fonction pour qu'on puisse passer le nombre de branches et les deux rayons comme paramètres à la fonction.


#include <stdio.h>
#include <math.h>


void coord(int branches, double rayon1, double rayon2) {
	double x = 0;
	double y = 0;
	double a = 0 ;
	double b = M_PI/branches ;
	double ang = 2 * M_PI/branches ;

	while (a < 2 * M_PI ) {
		x = rayon1 * sin(a) ;
		y = rayon1 * cos(a) ;
		printf(" (x, y) = (%f , %f)\n", x, y);
		a = a + ang ;

		x = rayon2 * sin(b) ;
		y = rayon2 * cos(b) ;
		printf(" (x, y) = (%f , %f)\n", x, y);
		b = b + ang ;
	}
}

int main(int argc, char * argv[]) {
	coord(5, 100, 50);
}

//kakakakakakka
