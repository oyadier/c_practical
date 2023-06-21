CC = gcc
CFLAGS = -Wall -Werror

# List of object files
OBJ = _getopt.o subtr.o add.o _struct.o persons.o

# Default target
all: operation

# Compile each source file into an object file
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Link the object files into the final executable
operation: $(OBJ)
	$(CC) $(OBJ) -o operation

# Clean up object files and executable
clean:
	rm -f $(OBJ) operation

