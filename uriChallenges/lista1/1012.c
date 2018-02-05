#include <stdio.h>

float retangleTriangle(float base,float height){
  return ((base*height)/2);
}

float circle(double radius,float pi){
  return (pi*(radius*radius));
}

float trapezium(double base1, double base2, double height){
  return ((base1+base2)*height)/2;
}

float square(double side){
  return side*side;
}

float retangle(double side1, double side2){
  return side1*side2;
}

int main(int argc, char const *argv[]) {

  double a,b,c;
  float PI = 3.14159;

  scanf("%lf %lf %lf",&a,&b,&c);

  printf("TRIANGULO: %.3lf\n",retangleTriangle(a,c));
  printf("CIRCULO: %.3lf\n",circle(c,PI));
  printf("TRAPEZIO: %.3lf\n",trapezium(a,b,c));
  printf("QUADRADO: %.3lf\n", square(b));
  printf("RETANGULO: %.3lf\n",retangle(a,b));
  return 0;
}
