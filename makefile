.PHONY: clean dirs

BIN=bin
SRC=src
LIBS= -lpthread

all: dirs $(BIN)/main

$(BIN)/main: $(SRC)/main.cpp $(SRC)/animal.h $(SRC)/food.h $(SRC)/bird.h $(SRC)/duck.h $(SRC)/wild_goose.h $(SRC)/birds.h $(SRC)/wing.h $(SRC)/swim.h
	g++ -std=c++11 $< -o $@ $(LIBS)


dirs:
	mkdir -p $(SRC) $(BIN)

clean:
	rm -rf $(BIN)

stat:
	wc src/* test/*
