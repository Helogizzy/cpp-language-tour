# OMP env vars
export OMP_SCHEDULE="static"
export OMP_NUM_THREADS=8
export OMP_DYNAMIC="false"
export OMP_NESTED="true"

CC :=gcc
CFLAGS := -g -fopenmp -lm

SRC = $(wildcard *.c)
BIN = $(patsubst %.c,%,$(SRC))

all: $(BIN)

clean: $(RM) $(BIN)
