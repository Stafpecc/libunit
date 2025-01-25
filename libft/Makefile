.SILENT:

.PHONY: all clean fclean re help valgrind

CFILES = isdigit                 \
	isalpha                      \
	isalnum                      \
	isascii                      \
	isprint                      \
	strlen                       \
	memset                       \
	bzero                        \
	memcpy                       \
	memmove                      \
	strlcpy                      \
	strlcat                      \
	toupper                      \
	tolower                      \
	strchr                       \
	strrchr                      \
	strncmp                      \
	memchr                       \
	memcmp                       \
	strnstr                      \
	atoi                         \
	strdup                       \
	calloc                       \
	split                        \
	substr                       \
	strjoin                      \
	strcmp 						 \
	strtrim                      \
	itoa                         \
	putchar_fd                   \
	putstr_fd                    \
	putendl_fd                   \
	putnbr_fd                    \
	strmapi                      \
	striteri                     \
	printf 		                 \
	putchar 			         \
	putstr 			             \
	putnbrbase 		             \
	handle                       \
	lstnew_bonus                 \
	lstadd_front_bonus           \
	lstsize_bonus                \
	lstlast_bonus                \
	lstadd_back_bonus            \
	lstdelone_bonus              \
	lstclear_bonus               \
	lstiter_bonus                \
	lstmap_bonus 

PURPLE          = \033[1;35m
GREEN           = \033[1;32m
RED             = \033[1;31m
YELLOW          = \033[33m
RESET           = \033[0m

NAME            = libft.a
INCLUDE         = libft.h
MAKEFILE        = Makefile
OBJS_DIR        = .objs/
CFILES_DIR		= cfiles/
INCLUDE_DIR		= ../framework/incs/

RM              = rm -f
RM_DIR			= rm -rf
CC              = cc
AR              = ar -rcs
MAKE			= make

CFLAGS          = -Wall -Wextra -Werror

SRC				= $(patsubst %, cfiles/ft_%.c, $(CFILES))
OBJS			= $(patsubst cfiles/%.c, .objs/%.o, $(SRC))

all: $(NAME)


$(NAME): $(OBJS)
	$(AR) $@ $^
	

$(OBJS_DIR):
	mkdir -p $(OBJS_DIR)

$(OBJS_DIR)%.o: $(CFILES_DIR)%.c $(INCLUDE_DIR)$(INCLUDE) | $(OBJS_DIR)
	$(CC) $(CFLAGS) -c $< -o $@


valgrind: $(NAME) main.c
	echo "$(PURPLE)Compiling for Valgrind with main.c...$(RESET)"
	$(CC) -g3 $(CFLAGS) -o exec main.c -L. -lft
	if [ -z "$(FLAGS)" ]; then \
		echo "$(PURPLE)Please define FLAGS (e.g., make valgrind FLAGS=1).$(RESET)"; \
	elif [ "$(FLAGS)" -eq 1 ]; then \
		valgrind --leak-check=full ./exec; \
	elif [ "$(FLAGS)" -eq 2 ]; then \
		valgrind --track-origins=yes ./exec; \
	elif [ "$(FLAGS)" -eq 3 ]; then \
		valgrind --tool=memcheck ./exec; \
	else \
		echo "$(RED)Invalid FLAGS value. Use 1, 2, or 3.$(RESET)"; \
	fi; \
	echo "$(RED)Cleaning up Valgrind executable...$(RESET)"; \
	$(RM) exec
	echo "$(GREEN)Valgrind execution completed!$(RESET)"


clean:
	$(RM_DIR) $(OBJS_DIR)


fclean: clean
	$(RM) $(NAME)


re : fclean all


help:
	echo "$(YELLOW)Available targets:$(RESET)"
	echo " "
	echo "$(GREEN)─────────────────────────────────────────────────"
	echo " "
	echo "$(GREEN)  all$(RESET)           - Compile the library and generate $(NAME)"
	echo "$(GREEN)  clean$(RESET)         - Remove all object files and temporary build files"
	echo "$(GREEN)  fclean$(RESET)        - Perform 'clean' and remove the $(NAME) archive"
	echo "$(GREEN)  re$(RESET)            - Rebuild everything from scratch"
	echo "$(GREEN)  main$(RESET)          - Compile and run the main program with $(NAME)"
	echo "$(GREEN)  test$(RESET)          - Run basic tests on the compiled program"
	echo "$(GREEN)  valgrind$(RESET)      - Run Valgrind with optional FLAGS for memory analysis"
	echo " "
	echo "   $(YELLOW).$(RESET) $(GREEN)FLAGS=1$(RESET) -> Leak check"
	echo "   $(YELLOW).$(RESET) $(GREEN)FLAGS=2$(RESET) -> Track origins of errors"
	echo "   $(YELLOW).$(RESET) $(GREEN)FLAGS=3$(RESET) -> Memcheck, a memory error detector"
	echo " "
	echo "$(GREEN)  docker-build$(RESET)  - Build a Docker image for the project"
	echo "$(GREEN)  docker-run$(RESET)    - Run the project in a Docker container"
	echo "$(GREEN)  docker-clean$(RESET)  - Remove the Docker image"
	echo " "
	echo "$(GREEN)─────────────────────────────────────────────────"