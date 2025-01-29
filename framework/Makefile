.PHONY: all clean fclean re help FORCE

NAME			= libunit.a
NAME_BONUS		= libunit_bonus.a
CFILES_DIR		= srcs/
OBJS_DIR		= .objs/
LIBFT_DIR		= ../libft
LIBFT_TARGET	= ../libft/libft.a

INCLUDE			= incs
INCLUDE_BONUS	= incs_bonus
LIBFT			= libft.a

RM 				= rm -f
RM_DIR			= rm -rf
CC				= cc
AR				= ar -rcs
MAKE			= make

CFILES          = launch \
				  load

CFILES_BONUS    = launch_test_bonus \
				  load_test_bonus

CFLAGS 			= -Wall -Wextra -Werror -I$(INCLUDE)

SRC				= $(patsubst %, $(CFILES_DIR)%_test.c, $(CFILES))
OBJS			= $(patsubst $(CFILES_DIR)%.c, $(OBJS_DIR)%.o, $(SRC))

SRC_BONUS       = $(patsubst %, srcs_bonus/%.c, $(CFILES_BONUS))
OBJS_BONUS		= $(patsubst srcs_bonus/%.c, $(OBJS_DIR)%.o, $(SRC_BONUS))

all: $(NAME)

bonus: $(NAME) $(NAME_BONUS)

$(LIBFT_TARGET): FORCE
	$(MAKE) -C $(@D)

$(NAME): $(LIBFT_TARGET) $(OBJS) $(INCLUDE)/libunit.h $(INCLUDE)/libft.h
	$(AR) $@ $^
	ranlib $@

$(NAME_BONUS): $(LIBFT_TARGET) $(OBJS_BONUS) $(INCLUDE_BONUS)/libunit_bonus.h $(INCLUDE)/libft.h
	$(AR) $@ $^
	ranlib $@

$(OBJS_DIR)%.o: $(CFILES_DIR)%.c | $(OBJS_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJS_DIR)%.o: srcs_bonus/%.c | $(OBJS_DIR)
	$(CC) $(CFLAGS) -I$(INCLUDE_BONUS) -c $< -o $@

$(OBJS_DIR):
	mkdir -p $(OBJS_DIR)

clean:
	$(RM_DIR) $(OBJS_DIR)

fclean: clean
	$(RM) $(NAME) $(NAME_BONUS)

re: fclean all
