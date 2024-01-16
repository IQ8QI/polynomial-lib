FLAGS := -std=c++20 -Wall -Wpedantic

./tmp/test-all.app: ./tmp/polynomial.o ./tmp/test-all.o
	@echo "Linking into ./tmp/test-all.app"
	g++ ./tmp/polynomial.o ./tmp/test-all.o -o ./tmp/test-all.app $(FLAGS)

./tmp/polynomial.o: ./polynomial-lib/polynomial.cpp ./polynomial-lib/polynomial.hpp
	@echo "Compiling ./tmp/polynomial.o"
	-mkdir ./tmp
	g++ -c ./polynomial-lib/polynomial.cpp -o ./tmp/polynomial.o $(FLAGS)

./tmp/test-all.o: ./test-poly/test-all.cpp
	@echo "Compiling ./tmp/test-all.o"
	-mkdir ./tmp
	g++ -c ./test-poly/test-all.cpp -o ./tmp/test-all.o $(FLAGS)

test: ./tmp/test-all.app
	@echo "Running the tests!"
	-./tmp/test-all.app

clean:
	@echo "Cleaning up!"
	-rm ./tmp/test-all.app
	-rm ./tmp/polynomial.o
	-rm ./tmp/test-all.o
	-rm -d ./tmp
