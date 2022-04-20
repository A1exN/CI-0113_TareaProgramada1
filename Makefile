FLAGS = -g -c --std=c++17

all:
	mkdir -p bin
	g++ $(FLAGS) src/envioServicioPostal.cpp -o bin/envioServicioPostal.o
	g++ $(FLAGS) src/main.cpp -o bin/main.o
	g++ -g -o bin/tipos_envio bin/envioServicioPostal.o bin/main.o
	
clean:
	rm -Rf bin
