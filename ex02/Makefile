NAME = Array
SRCS = main.cpp Array.hpp
OBJS = $(SRCS:.cpp=.o)
CC = c++
RM = rm -f

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

re: clean all

.PHONY: all clean re