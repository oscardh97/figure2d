figure:	figure2d.o pointer.o quadrilateral.o ellipse.o rectangle.o square.o triangle.o rombo.o circle.o main.o
	g++ figure2d.o pointer.o quadrilateral.o ellipse.o rectangle.o square.o triangle.o rombo.o circle.o main.o -o figure

main.o:	main.cpp figure2d.h quadrilateral.h ellipse.h rectangle.h square.h triangle.h pointer.h rombo.h circle.h
	g++ -c main.cpp

pointer.o:	pointer.cpp pointer.h
	g++ -c pointer.cpp

triangle.o:	triangle.cpp figure2d.h triangle.h
	g++ -c triangle.cpp

square.o:	square.cpp figure2d.h rectangle.h square.h
	g++ -c square.cpp

rectangle.o:	rectangle.cpp figure2d.h quadrilateral.h rectangle.h
	g++ -c rectangle.cpp

ellipse.o:	ellipse.cpp figure2d.h ellipse.h
	g++ -c ellipse.cpp

rombo.o:	rombo.cpp figure2d.h rombo.h
	g++ -c rombo.cpp

circle.o:	circle.cpp figure2d.h circle.h
	g++ -c circle.cpp

figure2d.o:	figure2d.cpp figure2d.h
	g++ -c figure2d.cpp

quadrilateral.o:	quadrilateral.cpp quadrilateral.h
	g++ -c quadrilateral.cpp
