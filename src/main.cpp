#define _USE_MATH_DEFINES
#include <iostream>
#include "LaborkaConfig.h"
#ifdef USE_TRIGONOMETRY_DEGREE
#include "trygonometria.h"
#else
#include <cmath>
#endif



int main() { 
	#ifdef USE_TRIGONOMETRY_DEGREE
	degreemath::cos(15);

	std::cout<< "sin=" << degreemath::sin(15)<<std::endl;
	std::cout<< "cos=" << degreemath::cos(15)<<std::endl;
	std::cout<< "tg=" << degreemath::tan(15)<<std::endl;
	std::cout<< "ctg=" << degreemath::ctg(15)<<std::endl;

#else
	std::cout<< "OFF=" << std::endl;
	std::cout<< "sin=" << sin(M_PI/4.0)<<std::endl;
	std::cout<< "cos=" << cos(M_PI/4.0)<<std::endl;
	std::cout<< "tg=" << tan(M_PI/4.0)<<std::endl;
	std::cout<< "ctg=" << 1/tan(M_PI/4.0)<<std::endl;
#endif


return 0;
}