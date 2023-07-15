CC = gcc

#Compiler flags
CCFLAGS = -Wall -Werror -Wextra

#Assigning object variables
OBJ = choice.o  draw.o  main.o  random.o  result.o

all: game
#Creating object files
%.o: %.c
	$(CC) $(CCFLAGS) -c $< -o $@

#Linking the object file to executable
game: $(OBJ)
	$(CC) $(OBJ) -o game

clean:
	rm -f $(OBJ) game
