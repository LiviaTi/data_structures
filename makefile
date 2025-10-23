RESET		= \033[0m
GREEN_BOLD	= \033[1;32m
YELLOW_BOLD	= \033[1;33m
RED_BOLD	= \033[1;31m

NAME        = project

CC          = cc
CFLAGS      = -Wall -Wextra -Werror

SRCS        =	linked_list/ft_insert_node.c \
				linked_list/ft_print_node.c \
				linked_list/ft_insert_node_last.c \
				linked_list/ft_insert_at_index.c \
            	main.c

OBJS        = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS) 
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	@echo "$(GREEN_BOLD) Compiled successfully!$(RESET)"

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "$(YELLOW_BOLD)Compiling:$(RESET) $<"


clean:
	@rm -f $(OBJS)
	@echo "$(RED_BOLD) Objects removed!$(RESET)"

fclean:
	@rm -f $(OBJS)
	@rm -f $(NAME)
	@echo "$(RED_BOLD) Project fully cleaned!$(RESET)"

re: fclean all

.PHONY: all clean fclean re