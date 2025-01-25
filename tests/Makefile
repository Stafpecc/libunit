j'appelle la lib et je ressort un exec


main: all $(MAIN) $(INCLUDE)
	$(CC) $(CFLAGS) -o $(EXEC) $(MAIN) -L. -lft
	$(MAKE) -C $(FRAMEWORK_DIR) fclean
	$(MAKE) -C $(LIBFT_DIR) fclean