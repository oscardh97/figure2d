#include "figure2d.h"
#include "ellipse.h"
#include "rectangle.h"
#include "square.h"
#include "pointer.h"
#include "rombo.h"
#include "circle.h"
#include "triangle.h"

#include <iostream>
using namespace std;

void otrafuncion(const Figure2D&);
Pointer pedirPunto(int);
Pointer pedirPunto();

int main(int argc, char* argv[]){
	int opcion;
	Pointer p1, p2, p3, p4;
	do{
		cout << "Que desea hacer?" << endl;
		cin >> opcion;
		if (opcion == 1){
			p1 = pedirPunto(1);
			p2 = pedirPunto(2);
			p3 = pedirPunto(3);
			Triangle tri(p1,p2,p3);
			cout << tri.perimeter() << endl;
		} else if (opcion == 2){
			int radio1, radio2;
			cout << "Ingrese el radio 1: ";
			cin >> radio1;
			cout << "Ingrese el radio 2: ";
			cin >> radio2;
			cout << "Ingrese el centro: " << endl;
			p1 = pedirPunto();
			Ellipse elip(radio1, radio2, p1);
			otrafuncion(elip);
		} else if (opcion == 3){
			p1 = pedirPunto(1);
			// p2 = pedirPunto(2);
			p3 = pedirPunto(3);
			// p3 = pedirPunto(4);
			Rectangle rect(p1, p3);
			p1 = pedirPunto(1);
			// p2 = pedirPunto(2);
			p3 = pedirPunto(3);
			Rectangle rect2(p1, p3);
			cout << rect.tall() << endl;
			otrafuncion(rect);
			otrafuncion(rect2);
			cout << "------<" << rect.intercepta(rect2) << endl;
		} else if (opcion == 4){
			double lado;
			cout << "Ingrese el lado: ";
			cin >> lado;
			p1 = pedirPunto(1);
			Square sq(lado, p1);
			otrafuncion(sq);
		} else if (opcion == 5){
			int altura, ancho;
			cout << "Ingrese el altura: ";
			cin >> altura;
			cout << "Ingrese el ancho: ";
			cin >> ancho;
			p1 = pedirPunto(1);
			Rombo rom(p1, ancho, altura);
			otrafuncion(rom);
		} else if (opcion == 6){
			int radio;
			cout << "Ingrese el radio: ";
			cin >> radio;
			p1 = pedirPunto(1);
			Circle cir(radio, p1);
			otrafuncion(cir);
		}
		cout << p1.toString() << endl;
		cout << p2.toString() << endl;
		cout << p3.toString() << endl;
	}while(1);






	//***********************************************Pruebas en Clase*************************************************//
	// Figure2D fig;
	// Ellipse ell(4, 1.5);
	// Rectangle rec(12, 4);
	// Square sq(3);
	// Pointer point(0,0);
	// Pointer point2(3,4);
	// cout << "Pointer: " << point.distanceTo(point2) << endl; 
	// cout << fig.toString() << endl;
	// //cout << fig.tall() << endl; main.cpp:21:14: error: ‘class Figure2D’ has no member named ‘tall’ 
	// cout << ell.toString() << endl;
	// //cout << ell.tall() << endl;
	// cout << rec.toString() << endl;
	// cout << rec.tall() << endl;
	// cout << sq.toString() << endl;
	// cout << sq.tall() << endl;
	// cout << tri.toString() << endl;
	// //cout << tri.tall() << endl;
	// cout << "--------- Llamando a otrafuncion ----------------" << endl;
	// otrafuncion(fig);
	// otrafuncion(ell);
	// otrafuncion(rec);
	// otrafuncion(sq);
	// otrafuncion(tri);
	// cout << "-------- Memoria dinamica para ver destructores----" << endl;

	// Figure2D* arr[4];
	// arr[0] = new Rectangle(5, 12);
	// arr[1] = new Ellipse(5, 12);
	// arr[2] = new Square(11);
	// arr[3] = new Triangle(2,2,2);

	// for (int i=0; i<4; i++)
	// 	cout << arr[i]->toString() << endl;


	// for (int i=0; i<4; i++){
	// 	cout << "liberando elemento " << i << endl;
	// 	delete arr[i];
	// }


	return 0;
}

void otrafuncion(const Figure2D& f){
	cout << f.toString() << endl;
	cout << "Area = " << f.area() << endl;
	cout << "Perimetro = " << f.perimeter() << endl;
}
Pointer pedirPunto(int num){
	cout << "Punto " << num << endl;
	return pedirPunto();
}
Pointer pedirPunto(){
	double x, y;
	cout << "Ingrese la posicion en x: ";
	cin >> x;
	cout << "Ingrese la posicion en y: ";
	cin >> y;
	return Pointer(x, y);
}
