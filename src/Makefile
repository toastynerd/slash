LIB = -lncurses -ltinfo
CFLAGS = -Wall
INC = -I../include

OBJ = main.c room.c play.c player.c movement.c level.c
SRCS = $(OBJ:%.o=%.c)

all: slash

slash: $(SRCS) 
	gcc -o $@ $(CFLAGS) $(LIB) $(INC) $(SRCS)

clean: 
	rm -rf *.o
