# Define the compiler and compilation flags
CC = gcc
CFLAGS = -Wall -g

# List of programs (executables)
TARGETS = lab1 lab2 lab3 lab4 lab5 lab6 lab7

# Default target (build all programs)
all: $(TARGETS)

lab1: lab1.c
	$(CC) $(CFLAGS) -o lab1 lab1.c

lab2: lab2.c
	$(CC) $(CFLAGS) -o lab2 lab2.c

lab3: lab3.c
	$(CC) $(CFLAGS) -o lab3 lab3.c

lab4: lab4.c
	$(CC) $(CFLAGS) -o lab4 lab4.c

lab5: lab5.c
	$(CC) $(CFLAGS) -o lab5 lab5.c

lab6: lab6.c
	$(CC) $(CFLAGS) -o lab6 lab6.c

lab7: lab7.c
	$(CC) $(CFLAGS) -o lab7 lab7.c


# Clean up object and executable files
clean:
ifeq ($(OS),Windows_NT)
	del /Q *.exe *.o
else
	rm -f $(TARGETS) *.o
endif