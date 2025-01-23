# Define the compiler and compilation flags
CC = gcc
CFLAGS = -Wall -g

# List of programs (executables)
TARGETS = lab4 lab5_char lab6_char lab7_char

# Default target (build all programs)
all: $(TARGETS)

lab4: lab4.c
	$(CC) $(CFLAGS) -o lab4 lab4.c

lab5: lab5_char.c
	$(CC) $(CFLAGS) -o lab5_char lab5_char.c

lab6: lab6_char.c
	$(CC) $(CFLAGS) -o lab6_char lab6_char.c

lab7: lab7_char.c
	$(CC) $(CFLAGS) -o lab7_char lab7_char.c


# Clean up object and executable files
clean:
ifeq ($(OS),Windows_NT)
	del /Q *.exe *.o
else
	rm -f $(TARGETS) *.o
endif