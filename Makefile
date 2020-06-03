main: bin/prog
test: bin/main-test

build/test/main-test.o: test/main.c
	gcc -std=c99 -I thirdparty -I src -c test/main.c -o build/test/main-test.o

bin/prog: build/src/main.o build/src/geometry.o
	gcc build/src/main.o build/src/geometry.o -o bin/prog -lm

build/src/main.o: src/main.c src/geometry.h
	gcc -Wall -Werror -c src/main.c -o build/src/main.o

build/src/geometry.o: src/geometry.c src/geometry.h
	gcc -Wall -Werror -c src/geometry.c -o build/src/geometry.o

bin/main-test: build/test/main-test.o build/src/geometry.o
	gcc -Wall -Werror build/test/main-test.o build/src/geometry.o -lm -o bin/main-test 

clean: 
	rm -rf bin/prog bin/main-test build/src/.o    build/test/.o

.PHONY: all clean