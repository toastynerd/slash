SRC_DIR = src
TEST_DIR = test
LIB = -lncurses -ltinfo
INC = -Iinclude
PREFIX ?= /usr/bin

.PHONY: slash clean install test

slash: 
	$(MAKE) -C $(SRC_DIR)
	mkdir -p bin
	mv $(SRC_DIR)/slash bin/slash

install:
	cp bin/slash $(PREFIX)/slash

test:
	$(MAKE) -C $(TEST_DIR)

clean:
	$(MAKE) -C $(SRC_DIR) clean
	$(MAKE) -C $(TEST_DIR) clean
	rm -rf bin/slash
