LIB = -lncurses -ltinfo -lcunit
CFLAGS = -Wall
INC = -I../include

OBJ = test.c test_helpers.c room_test.c ../src/room.c
SRCS = $(OBJ:%.o=%.c)

all: test run_test

test: $(SRCS)
	gcc -o $@ $(CFLAGS) $(LIB) $(INC) $(SRCS) 

run_test:
	./test

clean:
	rm -rf *.o
	rm -rf test
