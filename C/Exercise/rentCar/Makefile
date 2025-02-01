CC = gcc
CFLAGS = -Wall -Wextra -g
LDFLAGS = -lcheck -lm -lsubunit

# Files
SRC = noleggio.c
HEADERS = noleggio.h
MAIN = main.c


all: main run_main 

main: $(SRC) $(MAIN)
	$(CC) $(CFLAGS) -o main $(SRC) $(MAIN)

test: $(SRC) $(TEST)
	$(CC) $(CFLAGS) -o test $(SRC) $(TEST) $(LDFLAGS)

run_main: main
	@echo "Running Main Program:"
	./main

run_test: test
	@echo "Running Tests:"
	./test

clean:
	rm -f main test