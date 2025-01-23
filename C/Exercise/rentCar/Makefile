CC = gcc
CFLAGS = -Wall -Wextra -g
LDFLAGS = -lcheck -lm -lsubunit

# Files
SRC = noleggioUtils.c
HEADERS = noleggioUtils.h
MAIN = main.c
#TEST = test_math_utils.c

all: main test run_main run_test

main: $(SRC) $(MAIN)
	$(CC) $(CFLAGS) -o main $(SRC) $(MAIN)

#test: $(SRC) $(TEST)
#	$(CC) $(CFLAGS) -o test $(SRC) $(TEST) $(LDFLAGS)

run_main: main
	@echo "Running Main Program:"
	./main

#run_test: test
#	@echo "Running Tests:"
#	./test

clean:
	rm -f main test