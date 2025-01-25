.SILENT:


.PHONY: all clean fclean re help valgrind # test docker-build docker-run docker-clean

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
RESET           = \033[0m

NAME            = libft.a
INCLUDE         = libft.h
MAKEFILE        = Makefile
OBJS_DIR        = .objs/
CFILES_DIR		= cfiles/
INCLUDE_DIR		= includes/

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
	echo "$(PURPLE)Compilation of libft in progress...$(RESET)"
		$(AR) $@ $^
	echo "$(GREEN)Compilation of $(NAME) completed successfully$(RESET)"

	echo "$(GREEN)"
	echo "┌───────────────────────────────────────────────────────────┐"
	echo "│      Compilation finished successfully! ᕕ(⌐■_■)ᕗ ♪♬       │"
	echo "└───────────────────────────────────────────────────────────┘"

	echo "                      ☆  *    .      ☆"
	echo "                        ∧＿∧   ∩    * ☆"
	echo "                 *  ☆ ( ・∀・)/ ."
	echo "                  .  ⊂      ノ* ☆"
	echo "                ☆ * (つ   ノ  .☆"
	echo "                      (ノ"

	echo "$(RESET)"


$(OBJS_DIR):
	echo "$(PURPLE)Creating directory $(OBJS_DIR)...$(RESET)"

		mkdir -p $(OBJS_DIR)

	echo "$(GREEN)Directory $(OBJS_DIR) created successfully!$(RESET)"

$(OBJS_DIR)%.o: $(CFILES_DIR)%.c $(INCLUDE_DIR)$(INCLUDE) | $(OBJS_DIR)
	echo "$(PURPLE)Compiling $<...$(RESET)"

		$(CC) $(CFLAGS) -c $< -o $@

	echo "$(GREEN)$< completed successfully!$(RESET)"


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
		valgrind --tool=massif ./exec; \
	else \
		echo "$(RED)Invalid FLAGS value. Use 1, 2, or 3.$(RESET)"; \
	fi; \
	echo "$(RED)Cleaning up Valgrind executable...$(RESET)"; \
	$(RM) exec
	echo "$(GREEN)Valgrind execution completed!$(RESET)"


clean:
	echo "$(RED)Deleting object files...$(RESET)"

		$(RM_DIR) $(OBJS_DIR)

	echo "$(GREEN)Deleting object files completed successfully!$(RESET)"


fclean: clean
	echo "$(RED)Deleting $(NAME)...$(RESET)"

		$(RM) $(NAME)

	echo "$(GREEN)Deleting $(NAME) completed successfully!$(RESET)"
	
	echo "$(RED)"
	echo "┌──────────────────────────────────────────────────────────┐"
	echo "│      Deletion finished successfully! ( ◔ ω◔) ノシ        │"
	echo "└──────────────────────────────────────────────────────────┘"
	
	echo "                          ╱|、"
	echo "                        (˚ˎ 。7"
	echo "                         |、˜|"
	echo "                        じしˍ,)ノ"
	
	echo "$(RESET)"


re : fclean all


# test:
# 	echo "$(PURPLE)Running tests...$(RESET)"

# 		$(MAKE) -C $(TESTER_DIR)

# 	echo "$(PURPLE)"
# 	echo "┌───────────────────────────────────────────────────┐"
# 	echo "│      Tests completed successfully! ᕙ(⇀‸↼‶)ᕗ       │"
# 	echo "└───────────────────────────────────────────────────┘"

# 	echo "                      |\\__/,|   ( \\"
# 	echo "                    _.|o o   |_   ) )"
# 	echo "                  -(((---(((---------"

# 	echo "$(RESET)"

# 		$(MAKE) fclean


# docker-build:
# 	docker build -t $(DOCKER_IMAGE):$(DOCKER_TAG) .

# docker-run: docker-build
# 	docker run --rm -it $(DOCKER_IMAGE):$(DOCKER_TAG)

# docker-clean:
# 	docker rmi -f $(DOCKER_IMAGE):$(DOCKER_TAG)


help:
	echo "Available targets:"
	echo "  all           - Compile the library and generate $(NAME)"
	echo "  clean         - Remove all object files and temporary build files"
	echo "  fclean        - Perform 'clean' and remove the $(NAME) archive"
	echo "  re            - Rebuild everything from scratch"
	echo "  main          - Compile and run the main program with $(NAME)"
	echo "  test          - Run basic tests on the compiled program"
	echo "  valgrind      - Run Valgrind with optional FLAGS for memory analysis"
	echo " "
	echo "                    .  FLAGS=1 -> Leak check"
	echo "                    .  FLAGS=2 -> Track origins of errors"
	echo "                    .  FLAGS=3 -> Massif memory profiler"
	echo " "
	echo "  docker-build  - Build a Docker image for the project"
	echo "  docker-run    - Run the project in a Docker container"
	echo "  docker-clean  - Remove the Docker image"