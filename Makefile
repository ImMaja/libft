# NAME = libft.a
# CC = cc
# FLAGS = -Wall -Werror -Wextra

# OBJS_DIR = objs/

# LIBFT_SRCS = libft_srcs/ft_isalpha.c \
# 			libft_srcs/ft_isdigit.c \
# 			libft_srcs/ft_isalnum.c \
# 			libft_srcs/ft_isascii.c \
# 			libft_srcs/ft_isprint.c \
# 			libft_srcs/ft_strlen.c \
# 			libft_srcs/ft_memset.c \
# 			libft_srcs/ft_bzero.c \
# 			libft_srcs/ft_memcpy.c \
# 			libft_srcs/ft_memmove.c \
# 			libft_srcs/ft_strlcpy.c \
# 			libft_srcs/ft_strlcat.c \
# 			libft_srcs/ft_toupper.c \
# 			libft_srcs/ft_tolower.c \
# 			libft_srcs/ft_strchr.c \
# 			libft_srcs/ft_strrchr.c \
# 			libft_srcs/ft_strncmp.c \
# 			libft_srcs/ft_memchr.c \
# 			libft_srcs/ft_memcmp.c \
# 			libft_srcs/ft_strnstr.c \
# 			libft_srcs/ft_atoi.c \
# 			libft_srcs/ft_calloc.c \
# 			libft_srcs/ft_strdup.c \
# 			libft_srcs/ft_substr.c \
# 			libft_srcs/ft_strjoin.c \
# 			libft_srcs/ft_strtrim.c \
# 			libft_srcs/ft_split.c \
# 			libft_srcs/ft_itoa.c \
# 			libft_srcs/ft_strmapi.c \
# 			libft_srcs/ft_striteri.c \
# 			libft_srcs/ft_putchar_fd.c \
# 			libft_srcs/ft_putstr_fd.c \
# 			libft_srcs/ft_putendl_fd.c \
# 			libft_srcs/ft_putnbr_fd.c \
# 			libft_srcs/ft_realloc.c \
# 			libft_srcs/ft_memcpy_opti_af.c \
# 			libft_srcs/ft_realloc_array.c \
# 			libft_srcs/ft_free_array.c \
# 			libft_srcs/ft_free_array_of_array.c \
# 			libft_srcs/ft_get_array_length.c \

# GNL_SRCS = gnl_srcs/get_next_line.c \

# PRINTF_SRCS = ft_printf_srcs/ft_printf.c \
# 			ft_printf_srcs/base_utils.c \
# 			ft_printf_srcs/print_functions.c \
# 			ft_printf_srcs/print_functions2.c

# LIBFT_OBJS = $(patsubst libft_srcs/%.c,$(OBJS_DIR)%.o,$(LIBFT_SRCS))
# GNL_OBJS = $(patsubst gnl_srcs/%.c,$(OBJS_DIR)%.o,$(GNL_SRCS))
# PRINTF_OBJS = $(patsubst ft_printf_srcs/%.c,$(OBJS_DIR)%.o,$(PRINTF_SRCS))

# OBJS = $(LIBFT_OBJS) $(GNL_OBJS) $(PRINTF_OBJS)

# $(OBJS_DIR)%.o : libft_srcs/%.c | $(OBJS_DIR)
# 	$(CC) $(FLAGS) -o $@ -c $<

# $(OBJS_DIR)%.o : gnl_srcs/%.c | $(OBJS_DIR)
# 	$(CC) $(FLAGS) -o $@ -c $<

# $(OBJS_DIR)%.o : ft_printf_srcs/%.c | $(OBJS_DIR)
# 	$(CC) $(FLAGS) -o $@ -c $<

# $(NAME) : $(OBJS)
# 	ar rcs $(NAME) $(OBJS)

# $(OBJS_DIR) :
# 	mkdir -p $(OBJS_DIR)

# all : $(NAME)

# clean :
# 	rm -rf $(OBJS_DIR)

# fclean : clean
# 	rm -f $(NAME)

# re : fclean all

# .PHONY: all clean fclean re


NAME = libft.a
CC = cc

FLAGS = -Wall -Werror -Wextra

SRCS_DIR = srcs/
LIBFT = libft/
FT_PRINTF = ft_printf/
GET_NEXT_LINE = get_next_line/

OBJS_DIR = objs/

GREEN=\033[0;32m
NC=\033[0m

HEADER = libft.h

SRCS = $(SRCS_DIR)$(LIBFT)ft_isalpha.c \
		$(SRCS_DIR)$(LIBFT)ft_isdigit.c \
		$(SRCS_DIR)$(LIBFT)ft_isalnum.c \
		$(SRCS_DIR)$(LIBFT)ft_isascii.c \
		$(SRCS_DIR)$(LIBFT)ft_isprint.c \
		$(SRCS_DIR)$(LIBFT)ft_strlen.c \
		$(SRCS_DIR)$(LIBFT)ft_memset.c \
		$(SRCS_DIR)$(LIBFT)ft_bzero.c \
		$(SRCS_DIR)$(LIBFT)ft_memcpy.c \
		$(SRCS_DIR)$(LIBFT)ft_memmove.c \
		$(SRCS_DIR)$(LIBFT)ft_strlcpy.c \
		$(SRCS_DIR)$(LIBFT)ft_strlcat.c \
		$(SRCS_DIR)$(LIBFT)ft_toupper.c \
		$(SRCS_DIR)$(LIBFT)ft_tolower.c \
		$(SRCS_DIR)$(LIBFT)ft_strchr.c \
		$(SRCS_DIR)$(LIBFT)ft_strrchr.c \
		$(SRCS_DIR)$(LIBFT)ft_strncmp.c \
		$(SRCS_DIR)$(LIBFT)ft_memchr.c \
		$(SRCS_DIR)$(LIBFT)ft_memcmp.c \
		$(SRCS_DIR)$(LIBFT)ft_strnstr.c \
		$(SRCS_DIR)$(LIBFT)ft_atoi.c \
		$(SRCS_DIR)$(LIBFT)ft_calloc.c \
		$(SRCS_DIR)$(LIBFT)ft_strdup.c \
		$(SRCS_DIR)$(LIBFT)ft_substr.c \
		$(SRCS_DIR)$(LIBFT)ft_strjoin.c \
		$(SRCS_DIR)$(LIBFT)ft_strtrim.c \
		$(SRCS_DIR)$(LIBFT)ft_split.c \
		$(SRCS_DIR)$(LIBFT)ft_itoa.c \
		$(SRCS_DIR)$(LIBFT)ft_strmapi.c \
		$(SRCS_DIR)$(LIBFT)ft_striteri.c \
		$(SRCS_DIR)$(LIBFT)ft_putchar_fd.c \
		$(SRCS_DIR)$(LIBFT)ft_putstr_fd.c \
		$(SRCS_DIR)$(LIBFT)ft_putendl_fd.c \
		$(SRCS_DIR)$(LIBFT)ft_putnbr_fd.c \
		$(SRCS_DIR)$(LIBFT)ft_realloc.c \
		$(SRCS_DIR)$(LIBFT)ft_memcpy_opti_af.c \
		$(SRCS_DIR)$(LIBFT)ft_realloc_array.c \
		$(SRCS_DIR)$(LIBFT)ft_free_array.c \
		$(SRCS_DIR)$(LIBFT)ft_free_array_of_array.c \
		$(SRCS_DIR)$(LIBFT)ft_get_array_length.c \
		\
		$(SRCS_DIR)$(FT_PRINTF)ft_printf.c \
		$(SRCS_DIR)$(FT_PRINTF)base_utils.c \
		$(SRCS_DIR)$(FT_PRINTF)print_functions.c \
		$(SRCS_DIR)$(FT_PRINTF)print_functions2.c \
		\
		$(SRCS_DIR)$(GET_NEXT_LINE)get_next_line.c \

OBJS = $(patsubst $(SRCS_DIR)%.c,$(OBJS_DIR)%.o,$(SRCS))

$(OBJS_DIR)%.o : $(SRCS_DIR)%.c $(HEADER) | $(OBJS_DIR)
	@$(CC) $(FLAGS) -o $@ -c $<
	@echo "Compiling $<"

$(NAME): $(OBJS) $(HEADER)
	@echo "Creating library $(NAME)"
	@ar rcs $(NAME) $(OBJS)
	@echo "$(GREEN)LIBFT COMPILED$(NC)"

$(OBJS_DIR) :
	@echo "Creating directory $(OBJS_DIR)$(LIBFT)"
	@mkdir -p $(OBJS_DIR)$(LIBFT)
	@echo "Creating directory $(OBJS_DIR)$(FT_PRINTF)"
	@mkdir -p $(OBJS_DIR)$(FT_PRINTF)
	@echo "Creating directory $(OBJS_DIR)$(GET_NEXT_LINE)"
	@mkdir -p $(OBJS_DIR)$(GET_NEXT_LINE)

all : $(NAME)

clean :
	@rm -rf $(OBJS_DIR)
	@echo "Deleted directory $(OBJS_DIR) and content"

fclean : clean
	@rm -f $(NAME)
	@echo "Deleted executable $(NAME)"

re : fclean all

.PHONY: all clean fclean re