#include "trygonometria.h"
#define _USE_MATH_DEFINES
#include <cmath>


double degreemath::sin(double degree) {
//zamiana stopni na radiany: pi radianów = 180 stopni
	double radian=(degree*M_PI)/180;
return std::sin(radian); //funkcja biblioteczna z piku <cmath>
}


double degreemath::cos(double degree) {
//zamiana stopni na radiany: pi radianów = 180 stopni
	double radian=(degree*M_PI)/180;
return std::cos(radian); //funkcja biblioteczna z piku <cmath>
}

double degreemath::tan(double degree) {
//zamiana stopni na radiany: pi radianów = 180 stopni
	double radian=(degree*M_PI)/180;
return std::tan(radian); //funkcja biblioteczna z piku <cmath>
}

double degreemath::ctg(double degree) {
//zamiana stopni na radiany: pi radianów = 180 stopni
	double radian=(degree*M_PI)/180;
	double ctg=1/std::tan(radian); 
return ctg; //funkcja biblioteczna z piku <cmath>
}

