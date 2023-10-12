libLinux:
	clear
	clang++ -shared -o ./lib/libcalc.so -fPIC ./lib/calc.cpp

libWindows:
	clear
	g++ -shared -o ./libcalc.dll ./lib/calc.cpp -Wl, --out-implib,./lib/libcalc.a

buildLinux:
	clear
	clang++ -o app main.cpp -L./lib -lcalc

buildWindows:
	clear
	g++ -o app main.cpp -L./lib -lcalc

run:
	clear
	./app
