CC := gcc
LINKER := gcc
CC_FLAGS :=
CFLAGS := -Wall -Og -g
C_SRCS := $(wildcard src/*.c)
INCLUDES := $(wildcard src/*.h)
OBJS := $(patsubst %.c, %.o, $(C_SRCS))
INCLUDEPATH := -I./src
EXEC := gol

all: $(EXEC)

$(EXEC): $(OBJS) $(INCLUDES)
	$(LINKER) -o $@ $(OBJS) $(CC_FLAGS)

&.o:%.c
	$(CC) $(CC_FLAGS) $(CFLAGS) -c $< -o $@ $(INCLUDEPATH) 

clean:
	rm -rf $(OBJS) $(EXEC)
