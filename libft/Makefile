# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: vsteyaer <marvin@le-101.fr>                +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2018/01/16 16:16:29 by vsteyaer     #+#   ##    ##    #+#        #
#    Updated: 2018/06/06 19:28:50 by vsteyaer    ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

.PHONY: all clean fclean re

NAME = libft.a
CC = gcc
CC_FLAGS = -Wall -Wextra -Werror
PATH_OLIBFT = ./srcs/
PATH_SLIBFT = ./srcs/
PATH_ILIBFT = ./include/
FILESLIBFT = ft_putchar ft_putstr ft_strcmp ft_strdup ft_strlen ft_strcpy ft_memset ft_bzero ft_memcpy ft_memccpy ft_memmove ft_memchr ft_memcmp ft_strncpy ft_strcat ft_strncat ft_strlcat ft_strchr ft_strrchr ft_strstr ft_strnstr ft_strncmp ft_atoi ft_isalpha ft_isdigit ft_isalnum ft_isascii ft_isprint ft_toupper ft_tolower ft_memalloc ft_memdel ft_strnew ft_strdel ft_strclr ft_striter ft_striteri ft_strmap ft_strmapi ft_strequ ft_strnequ ft_strsplit ft_itoa ft_strsub ft_strjoin ft_strtrim ft_putendl ft_putchar_fd ft_putstr_fd ft_putendl_fd ft_putnbr_fd ft_lstnew ft_lstdelone ft_lstdel ft_lstadd ft_lstiter ft_lstmap ft_putwchar ft_revstr ft_digitlen ft_putwstr ft_wstrlen ft_wcharlen ft_wstrcpy ft_wstrcat ft_wstrnew ft_strcapitalize get_next_line ft_strisxdigit ft_strisdigit ft_isxdigit ft_strisdigit_pos_neg
SLIBFT = $(addprefix $(PATH_SLIBFT), $(addsuffix .c, $(FILESLIBFT)))
OLIBFT = $(addprefix $(PATH_OLIBFT), $(addsuffix .o, $(FILESLIBFT:.c=.o)))
ILIBFT = $(addprefix $(PATH_ILIBFT), libft.h)

all : $(NAME)

$(NAME) : $(OLIBFT)
	@ar rcs $(NAME) $(OLIBFT)

$(PATH_OLIBFT)%.o : $(PATH_SLIBFT)%.c $(ILIBFT)
	@$(CC) $(CC_FLAGS) -o $@ -c $< -I $(PATH_ILIBFT)

clean :
	@rm -f $(OLIBFT) $(OPRINTF)

fclean : clean
	@rm -f $(NAME)

re : fclean all
