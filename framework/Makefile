.PHONY: all clean fclean re help

NAME			= tester.a
CFILES_DIR		= srcs/
OBJS_DIR		= .objs/
LIBFT_DIR		= ../libft/

INCLUDE			= incs
LIBFT			= libft.a

RM 				= rm -f
RM_DIR			= rm -rf
CC				= cc
AR				= ar -rcs
MAKE			= make

CFLAGS 			= -Wall -Wextra -Werror

SRC				= $(patsubst %, cfiles/ft_%.c, $(CFILES))
OBJS			= $(patsubst cfiles/%.c, .objs/%.o, $(SRC))

all: $(NAME)

$(NAME): $(OBJS)
	$(MAKE) -C $(LIBFT_DIR)
	mv $(LIBFT_DIR)$(LIBFT) .
	mv $(LIBFT) $(NAME)
	$(AR) $@ $^

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

help:
	echo "Available targets:"
	echo "  all           - Compile the library and generate $(NAME)"
	echo "  clean         - Remove all object files and temporary build files"
	echo "  fclean        - Perform 'clean' and remove the $(NAME) archive"
	echo "  re            - Rebuild everything from scratch"
