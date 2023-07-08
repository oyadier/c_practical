# Compiler
CMPL = gcc
# Compiler flags
CMPL_FLAG = -g -Wall -Werror

#List of all files
OBJ = main.c sports_no_bieber.c sports_or_workout.c  ns_theater.c find.c

#Default target
all: search

#Compile each file into object file
%.o: %.o
	$(CMPL) $(CMPL_FLAG) -c $< -o $@

search: $(OBJ)
	$(CMPL) $(OBJ) -o search

clean:
	rm -f $(OBJ) search

