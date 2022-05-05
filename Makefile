FLAGS = -g -c --std=c++17

all:
	mkdir -p bin
	g++ $(FLAGS) src/envioServicioPostal.cpp -o bin/envioServicioPostal.o
	g++ $(FLAGS) src/envioFedEx.cpp -o bin/envioFedEx.o
	g++ $(FLAGS) src/main.cpp -o bin/main.o
	g++ -g -o bin/tipos_envio bin/envioServicioPostal.o bin/envioFedEx.o bin/main.o

test:
	mkdir -p bin
	g++ $(FLAGS) src/envioServicioPostal.cpp -o bin/envioServicioPostal.o
	g++ $(FLAGS) src/envioFedEx.cpp -o bin/envioFedEx.o
	g++ $(FLAGS) tests/tiposEnvio_tests.cpp -o bin/tiposEnvio_tests.o
	g++ -g -o bin/tests bin/envioServicioPostal.o bin/envioFedEx.o bin/tiposEnvio_tests.o -lgtest -lgtest_main -lpthread
	
clean:
	rm -Rf bin
