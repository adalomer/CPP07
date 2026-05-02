NAME = whatever
SRCS = main.cpp whatever.cpp
OBJS = $(SRCS:.cpp=.o)
CC = c++
RM = rm -f

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: clean all

.PHONY: all clean re