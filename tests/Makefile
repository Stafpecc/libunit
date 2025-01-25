.PHONY: all clean fclean re help main

NAME			= tester
CFILES_DIR		= tests/
OBJS_DIR		= .objs/
FRAMEWORK_DIR	= ../../framework/

INCLUDE			= incs
LIBFT			= libft.a

RM 				= rm -f
RM_DIR			= rm -rf
CC				= cc
MAKE			= make

CFLAGS 			= -Wall -Wextra -Werror

SRC				= $(patsubst %, cfiles/%.c_tests, $(CFILES))
OBJS			= $(patsubst cfiles/%.c, .objs/%.o, $(SRC))


YELLOW          = \033[33m
GREEN           = \033[1;32m
RED             = \033[1;31m
RESET           = \033[0m


all: $(NAME)

$(NAME): $(OBJS)
	mv $(LIBFT_DIR)$(LIBFT) .

$(OBJS_DIR):
	mkdir -p $(OBJS_DIR)

$(OBJS_DIR)%.o: $(CFILES_DIR)%.c $(INCLUDE) | $(OBJS_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM_DIR) $(OBJS_DIR)
	$(MAKE) -C $(LIBFT_DIR) clean

fclean: clean
	$(RM) $(NAME)

re: fclean all


main: all $(MAIN) $(INCLUDE)
		$(CC) $(CFLAGS) -o $(EXEC) $(MAIN) -L. -lft
	echo "$(GREEN)─────────────────────────────────────────────────"

		./$(EXEC)

	echo "─────────────────────────────────────────────────$(RESET)"		


help:
	@echo "$(YELLOW)Available targets:$(RESET)"
	@echo " "
	@echo "$(GREEN)─────────────────────────────────────────────────"
	@echo " "
	@echo "$(GREEN)  all$(RESET)         - Compile the library and generate $(NAME)"
	@echo "$(GREEN)  clean$(RESET)       - Remove all object files and temporary build files"
	@echo "$(GREEN)  fclean$(RESET)      - Perform 'clean' and remove the $(NAME) binary"
	@echo "$(GREEN)  re$(RESET)          - Rebuild everything from scratch"
	@echo "$(GREEN)  main$(RESET)        - Compile and execute the main program"
	@echo "$(GREEN)  help$(RESET)        - Display this help message"
	@echo " "
	@echo "$(GREEN)─────────────────────────────────────────────────$(RESET)"
