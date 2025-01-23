CC = gcc
CFLAGS = -Wall -Wextra -g
LDFLAGS = -lcheck -lm -lsubunit

# Files
SRC = conversion.c
HEADERS = conversion.h
MAIN = main.c
TEST = test_conversion.c

all: main test run_main run_test

main: $(SRC) $(MAIN)
	$(CC) $(CFLAGS) -o main $(SRC) $(MAIN)

test: $(SRC) $(TEST)
	$(CC) $(CFLAGS) -o test $(SRC) $(TEST) $(LDFLAGS)

run_test: test
	@echo "Running Tests:"
	./test

run_main: main
	@echo "Running Main Program:"
	./main



clean:
	rm -f main test