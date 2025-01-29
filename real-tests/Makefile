NAME = real_tester
NAME_BONUS = real_tester_bonus
LIBS = libunit.a
LIBS_BONUS = libunit_bonus.a

# *********************************VARIABLES**************************************** #

SRCS_DIR = ./

SRCS =\
		main.c \
		strlen_tests/00_launcher.c \
		strlen_tests/01_basic_test.c \
		strlen_tests/02_empty_test.c \
		strlen_tests/03_bigger_str_test.c \
		strlen_tests/04_one_char_test.c \
		strlen_tests/05_null_char_in_str_test.c \
		strdup_tests/00_launcher.c \
		strdup_tests/01_basic_test.c \
		strdup_tests/02_null_test.c \
		strdup_tests/03_bigger_test.c \
		strdup_tests/04_empty_test.c \
		strdup_tests/05_one_char.c \
		strjoin_tests/00_launcher.c \
		strjoin_tests/01_basic_test.c \
		strjoin_tests/02_null_test.c \
		strjoin_tests/03_bigger_test.c \
		strjoin_tests/04_empty_test.c \
		strjoin_tests/05_one_char.c \
		atoi_tests/00_launcher.c \
		atoi_tests/01_basic_test.c \
		atoi_tests/02_negative_test.c \
		atoi_tests/03_multiple_sign_test.c \
		atoi_tests/04_only_string_test.c \
		atoi_tests/05_int_min_test.c
		

SRCS := $(SRCS:%=$(SRCS_DIR)/%)

SRCS_BONUS =\
		main_bonus.c \
		launcher_bonus/00_launcher_atoi_bonus.c \
		launcher_bonus/00_launcher_strdup_bonus.c \
		launcher_bonus/00_launcher_strjoin_bonus.c \
		launcher_bonus/00_launcher_strlen_bonus.c \
		strlen_tests/01_basic_test.c \
		strlen_tests/02_empty_test.c \
		strlen_tests/03_bigger_str_test.c \
		strlen_tests/04_one_char_test.c \
		strlen_tests/05_null_char_in_str_test.c \
		strdup_tests/01_basic_test.c \
		strdup_tests/02_null_test.c \
		strdup_tests/03_bigger_test.c \
		strdup_tests/04_empty_test.c \
		strdup_tests/05_one_char.c \
		strjoin_tests/01_basic_test.c \
		strjoin_tests/02_null_test.c \
		strjoin_tests/03_bigger_test.c \
		strjoin_tests/04_empty_test.c \
		strjoin_tests/05_one_char.c \
		atoi_tests/01_basic_test.c \
		atoi_tests/02_negative_test.c \
		atoi_tests/03_multiple_sign_test.c \
		atoi_tests/04_only_string_test.c \
		atoi_tests/05_int_min_test.c
		
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

CFLAGS = -Werror -Wextra -Wall -MMD -MP -g3

CPPFLAGS = -I$(INCS) -I$(INCS_LIBS)

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

$(NAME): $(LIBFT_TARGET) $(LIBS_TARGET) $(OBJS)
	$(CC) $(CFLAGS) $(CPPFLAGS) $(OBJS) -L $(dir $(LIBS_TARGET)) -L $(dir $(LIBFT_TARGET)) -lunit -lft -o $(NAME)

$(NAME_BONUS): $(LIBFT_TARGET) $(LIBS_TARGET_BONUS) $(OBJS_BONUS)
	$(CC) $(CFLAGS) $(CPPFLAGS) $(OBJS_BONUS) -L $(dir $(LIBS_TARGET_BONUS)) -L $(dir $(LIBFT_TARGET)) -lunit_bonus -lft -o $(NAME_BONUS)

$(LIBS_TARGET_BONUS): FORCE
	@echo " "
	@echo "\033[1m\033[32m#-------------------------[COMPILATION LIBUNIT]-------------------------#\033[0m"
	$(MAKE) -C $(@D) bonus
	@echo "\033[1m\033[32m#---------------------------[LIBUNIT COMPILED]--------------------------#\033[0m"
	@echo " "

$(LIBFT_TARGET) $(LIBS_TARGET): FORCE
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
