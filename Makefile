SRC_DIR = src
LIB = -lncurses -ltinfo
INC = -Iinclude
PREFIX ?= /usr/bin

.PHONY: slash clean install

slash: 
	$(MAKE) -C $(SRC_DIR)
	mkdir -p bin
	mv $(SRC_DIR)/slash bin/slash

install:
	cp bin/slash $(PREFIX)/slash

clean:
	$(MAKE) -C $(SRC_DIR) clean
	rm -rf bin/slash
