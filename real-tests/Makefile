NAME = real_tester
LIBS = libunit.a

# *********************************VARIABLES**************************************** #

SRCS_DIR = ./

SRCS =\
		main.c \
		tests/strlen_tests/00_launcher.c \
		tests/strlen_tests/01_basic_test.c \
		tests/strlen_tests/02_empty_test.c \
		tests/strlen_tests/03_bigger_str_test.c \
		tests/strlen_tests/04_one_char_test.c \
		tests/strlen_tests/05_null_char_in_str_test.c \
		tests/strdup_tests/00_launcher.c \
		tests/strdup_tests/01_basic_test.c \
		tests/strdup_tests/02_null_test.c \
		tests/strdup_tests/03_bigger_test.c \
		tests/strdup_tests/04_empty_test.c \
		tests/strdup_tests/05_one_char.c \
		tests/strjoin_tests/00_launcher.c \
		tests/strjoin_tests/01_basic_test.c \
		tests/strjoin_tests/02_null_test.c \
		tests/strjoin_tests/03_bigger_test.c \
		tests/strjoin_tests/04_empty_test.c \
		tests/strjoin_tests/05_one_char.c \
		tests/atoi_tests/00_launcher.c \
		tests/atoi_tests/01_basic_test.c \
		tests/atoi_tests/02_negative_test.c \
		tests/atoi_tests/03_multiple_sign_test.c \
		tests/atoi_tests/04_only_string_test.c \
		tests/atoi_tests/05_int_min_test.c
		

SRCS := $(SRCS:%=$(SRCS_DIR)/%)

OBJS_DIR = ./.OBJS

OBJS = $(SRCS:$(SRCS_DIR)/%.c=$(OBJS_DIR)/%.o)

OBJS_BONUS = $(SRCS_BONUS:$(SRCS_DIR)/%.c=$(OBJS_DIR)/%.o)

INCS = ./incs

INCS_LIBS = ../framework/incs

DEPS = $(OBJS:.o=.d)

DEPS_BONUS = $(OBJS_BONUS:.o=.d)

LIBS_TARGET = ../framework/libunit.a

# **********************************COMMANDS**************************************** #

CC = cc

CFLAGS = -Werror -Wextra -Wall -MMD -MP

CPPFLAGS = -I$(INCS) -I$(INCS_LIBS)

CFSIGSEV = -fsanitize=address

RM = rm -rf

DIR_DUP= mkdir -p $(@D)

AR = ar rcs

MAKEFLAGS += --no-print-directory

# **********************************RULES**************************************** #

all:	$(NAME)

-include $(DEPS)

$(NAME): $(LIBS_TARGET) $(OBJS)
	$(CC) $(CFLAGS) $(CPPFLAGS) $(OBJS) -L$(dir $(LIBS_TARGET)) -lunit -o $(NAME)

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

fclean : clean
	$(RM) $(NAME)
	$(MAKE) $@ -C ../framework/

re : fclean all

print% :
	@echo $(patsubst print%,%,$@)=
	@echo $($(patsubst print%,%,$@))

.PHONY: all clean fclean re FORCE print%
FORCE:
