NAME = false_tester
NAME_BONUS = false_tester_bonus
LIBS = libunit.a
LIBS_BONUS = libunit_bonus.a

# *********************************VARIABLES**************************************** #
		
SRCS_DIR = ./

SRCS =\
		strlen/01_strlen_ok.c \
		strlen/02_strlen_ko.c \
		strlen/02_strlen_ko_function.c \
		strlen/03_strlen_segfault.c \
		strlen/04_strlen_bus.c \
		strlen/04_strlen_bus_function.c \
		strlen/00_launcher.c \
		main.c

SRCS := $(SRCS:%=$(SRCS_DIR)/%)

SRCS_BONUS =\
		tests_bonus/00_launcher_bonus.c \
		tests_bonus/01_strlen_timeout_function_bonus.c \
		tests_bonus/01_strlen_timeout_bonus.c \
		tests_bonus/02_sigabort_bonus.c \
		tests_bonus/03_sigfpe_bonus.c \
		tests_bonus/04_sigpipe_bonus.c \
		tests_bonus/05_sigill_bonus.c \
		main_bonus.c
		
SRCS_BONUS := $(SRCS_BONUS:%=$(SRCS_DIR)/%)

OBJS_DIR = ./.OBJS

OBJS = $(SRCS:$(SRCS_DIR)/%.c=$(OBJS_DIR)/%.o)

OBJS_BONUS = $(SRCS_BONUS:$(SRCS_DIR)/%.c=$(OBJS_DIR)/%.o)

INCS = ./incs

INCS_LIBS = ../framework/incs

INCS_LIBS_BONUS = ../framework/incs_bonus

DEPS = $(OBJS:.o=.d)

DEPS_BONUS = $(OBJS_BONUS:.o=.d)

LIBFT_TARGET = ../libft/libft.a

LIBS_TARGET = ../framework/libunit.a

LIBS_TARGET_BONUS = ../framework/libunit_bonus.a

# **********************************COMMANDS**************************************** #

CC = cc

CFLAGS = -Werror -Wextra -Wall -MMD -MP

CPPFLAGS = -I$(INCS) -I$(INCS_LIBS) -I$(INCS_LIBS_BONUS)

CFSIGSEV = -fsanitize=address

RM = rm -rf

DIR_DUP= mkdir -p $(@D)

AR = ar rcs

MAKEFLAGS += --no-print-directory

# **********************************RULES**************************************** #

all:	$(NAME)

bonus : $(NAME) $(NAME_BONUS)

-include $(DEPS)

test : all
	./$(NAME)

valgrind : all
	valgrind --leak-check=full --show-leak-kinds=all ./$(NAME)
	
$(NAME): $(LIBS_TARGET) $(OBJS)
	$(CC) $(CFLAGS) $(CPPFLAGS) $(OBJS) -L $(dir $(LIBS_TARGET)) -L $(dir $(LIBFT_TARGET)) -lunit -lft -o $(NAME)

$(NAME_BONUS): $(LIBS_TARGET_BONUS) $(OBJS_BONUS)
	$(CC) $(CFLAGS) $(CPPFLAGS) $(OBJS_BONUS) -L $(dir $(LIBS_TARGET_BONUS)) -L $(dir $(LIBFT_TARGET)) -lunit_bonus -lft -o $(NAME_BONUS)

$(LIBS_TARGET_BONUS): FORCE
	@echo " "
	@echo "\033[1m\033[32m#-------------------------[COMPILATION LIBUNIT]-------------------------#\033[0m"
	$(MAKE) -C $(@D) bonus
	@echo "\033[1m\033[32m#---------------------------[LIBUNIT COMPILED]--------------------------#\033[0m"
	@echo " "

$(LIBS_TARGET): FORCE
	@echo " "
	@echo "\033[1m\033[32m#-------------------------[COMPILATION LIBUNIT]-------------------------#\033[0m"
	$(MAKE) -C $(@D)
	@echo "\033[1m\033[32m#---------------------------[LIBUNIT COMPILED]--------------------------#\033[0m"
	@echo " "

$(OBJS_DIR)/%.o: $(SRCS_DIR)/%.c
	@$(DIR_DUP)
	$(CC) $(CFLAGS) $(CPPFLAGS) -c $< -o $@

clean :
	$(RM) $(OBJS_DIR)
	$(MAKE) $@ -C ../framework/
	$(MAKE) $@ -C ../libft/

fclean : clean
	$(RM) $(NAME)
	$(RM) $(NAME_BONUS)
	$(MAKE) $@ -C ../framework/
	$(MAKE) $@ -C ../libft/

re : fclean all

print% :
	@echo $(patsubst print%,%,$@)=
	@echo $($(patsubst print%,%,$@))

.PHONY: all clean fclean re valgrind test bonus FORCE print%
FORCE: