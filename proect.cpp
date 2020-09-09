#define _USE_MATH_DEFINES
#include <cmath>
#include <limits>
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include "vec.h"
#include "Light.h"
#include "Skin.h"
#include "Sphere.h"
#include "Methods.h"
using namespace std;
int main() {
	Skin one(V(0.5, 0.5, 0.5));
	Skin two(V(0.7, 0.0, 0.8));
	vector<Sphere> spheres;
	spheres.push_back(Sphere(V(5, 2, -10), 1.5, one));
	spheres.push_back(Sphere(V(-4, 0, -11), 2.5, two));
	vector<Light> lights;
	lights.push_back(Light(V(15, 15, 10), 4));
	Methods met;
	met.render(spheres, lights);
	cout <<"Done!"<<endl;
	system("pause");
	return 0;
}
