#ifndef FRACTAL_H
#define FRACTAL_H
#include "include.h"

class Fractal {


    private:


    public:
        Fractal();
        virtual void dessiner() = 0;
        virtual ~Fractal();
        const int    nombreIterationMax = 100;
        const double borneModule = 2;
        const double xMin = -2.0;
        const double xMax =  1.0;
        const double yMin = -1.0;
        const double yMax =  1.0;
        const int    zoom =  100;

};

#endif // FRACTAL_H
