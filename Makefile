CompOpt = g++ -O2 -std=c++11 
ObjCompOpt = g++ -O2 -std=c++11 -c
objects = rsa.o
LibOpt = -L. -lBigInt -lpoly

main: libBigInt.a libpoly.a $(objects) main.cpp
	$(CompOpt) $(objects) main.cpp -o main $(LibOpt)

libBigInt.a:
	make -C ./BigInt staticlib
	mv ./BigInt/libBigInt.a ./

libpoly.a:
	make -C ./BigInt/poly staticlib
	mv ./BigInt/poly/libpoly.a ./

rsa.o: rsa.cpp rsa.h
	$(CompOpt) $< -o $@ -c $(LibOpt)

clean: 
	rm $(objects)	