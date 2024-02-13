#include "dessincairo.h"
#include <stdio.h>

// x1 = xMin / y1 = yMin
// x2 = xMax / y2 = yMax



dessinCairo::dessinCairo() {



}

void dessinCairo:: dessiner (){

    double imageX = ( xMax - xMin ) * zoom;
    double imageY = ( yMax - yMin ) * zoom;

    for(int x=0; x<imageX; x++) {
        for(int y=0; y<imageY; y++) {
            double reelC        = x / zoom + xMin;
            double imaginaireC  = y / zoom + yMin;
            double reelZ        = 0;
            double imaginaireZ  = 0;
            int i = 0;


            while ( ((reelZ*reelZ + imaginaireZ*imaginaireZ) < borneModule) && i < nombreIterationMax) {

                double temp = reelZ;
                reelZ = reelZ * reelZ - imaginaireZ*imaginaireZ + reelC;
                imaginaireZ = 2 * imaginaireZ * temp + imaginaireC;
                i++;
            }

            //if (i == nombreIterationMax)

            cout << "x = " << x << "y = " << y << "i = " << i << endl;

            //else cout << "Couleur rgb" << endl;

        }
    }
}
