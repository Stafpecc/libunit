.PHONY: all clean fclean re help

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


test: all $(MAIN) $(INCLUDE)
		$(CC) $(CFLAGS) -o $(EXEC) $(MAIN) -L. -lft
	echo "─────────────────────────────────────────────────"

		./$(EXEC)

	echo "─────────────────────────────────────────────────"		


help:
	echo "Available targets:"
	echo "  all           - Compile the library and generate $(NAME)"
	echo "  clean         - Remove all object files and temporary build files"
	echo "  fclean        - Perform 'clean' and remove the $(NAME) archive"
	echo "  re            - Rebuild everything from scratch"
