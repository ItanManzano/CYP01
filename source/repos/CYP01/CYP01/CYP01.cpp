#include <iostream>

int main()
{

	int alto;
	int ancho;
	float x;
	float y;

	float porcentajeAncho;
	float porcentajeAlto;
	int coordenadaizqX;
	int coordenadaizqY;
	int coordenadaderX;
	int coordenadaderY;

	scanf_s("%i", &ancho);
	scanf_s("%i", &alto);
	scanf_s("%f", &x);
	scanf_s("%f", &y);
	scanf_s("%f", &porcentajeAncho);
	scanf_s("%f", &porcentajeAlto);

	coordenadaizqX = (int)ancho * x;
	coordenadaizqY = (int)alto * y;
	coordenadaderX = (int)ancho * porcentajeAncho + coordenadaizqX;
	coordenadaderY = (int)alto * porcentajeAlto + coordenadaizqY;

	printf("%i %i %5.2f %5.2f %5.2f %5.2f %i %i %i %i", ancho, alto, x, y, porcentajeAncho, porcentajeAlto, coordenadaizqX, coordenadaizqY, coordenadaderX, coordenadaderY);

}
