NAME		= framework.a
CFLAGS		= -Wall -Werror -Wextra -pedantic
CC			= g++
DEL			= rm -f

SRCS		= framework.cpp

OBJ_DIR		=	obj
OBJS			= $(SRCS:%.cpp=%.o)
OBJS			:= $(addprefix $(OBJ_DIR)/, $(OBJS))
INCLUDE		= -I include


all: $(NAME)

$(NAME): $(OBJ_DIR) $(OBJS)
	ar -rcs $(NAME) $(OBJS)

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

$(OBJ_DIR)/%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@ $(INCLUDE)

clean:
	$(DEL) $(OBJS)
	$(DEL) -r $(OBJ_DIR)
 
fclean: clean
	$(DEL) $(NAME)

re: fclean all

.PHONY: all clean fclean re