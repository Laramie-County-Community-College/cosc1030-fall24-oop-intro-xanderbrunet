#include <iostream>
#include "Triangle.h"
using namespace std;

int main() {
   Triangle triangle1;
   Triangle triangle2;

   double userBase;
   double userHeight;

   double areaTriangle1;
   double areaTriangle2;

   // Triangle 1
   cin >> userBase;
   cin >> userHeight;
   triangle1.SetBase(userBase);
   triangle1.SetHeight(userHeight);

   // Triangle 2
   cin >> userBase;
   cin >> userHeight;
   triangle2.SetBase(userBase);
   triangle2.SetHeight(userHeight);

   areaTriangle1 = triangle1.GetArea();
   areaTriangle2 = triangle2.GetArea();

   cout << "Triangle with smaller area:" << endl;

   if (areaTriangle1 < areaTriangle2){
      triangle1.PrintInfo();
   } else {
      triangle2.PrintInfo();
   }

   return 0;
}
