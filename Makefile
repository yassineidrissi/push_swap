# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yaidriss <yaidriss@student1337.com>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/12 22:48:21 by yaidriss          #+#    #+#              #
#    Updated: 2022/08/24 22:28:48 by yaidriss         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIBFT_PATH		=	./libft
LIBFT			=	$(LIBFT_PATH)/libft.a

SRCS			= 	push_swap.c \
					srcs/arg_valid.c \
					outils/operations.c\
					outils/outils.c\
					outils/sort_lst_radix.c\
					outils/sort_lst_man.c\
					# utils/arg_valid.c \
					# utils/initStack.c \
					# utils/link_list.c \
					# utils/is_sorted.c \
					# operations/operations_push.c \
					# operations/operations_rev_rotate.c \
					# operations/operations_rotate.c \
					# operations/operations_swap.c \
					# sort_simple.c utile_sort_simple.c \
					# radix_sort.c
					
SRCS_B			= 	checker.c \
					utils/arg_valid.c \
					utils/initStack.c \
					utils/link_list.c \
					utils/is_sorted.c \
					operations/operations_push.c \
					operations/operations_rev_rotate.c \
					operations/operations_rotate.c \
					operations/operations_swap.c \
					sort_simple.c utile_sort_simple.c \
					radix_sort.c
					
OBJES 		= ${SRCS:.c=.o}
OBJES_B 	= ${SRCS_B:.c=.o}

NAME 		= push_swap
NAME_B		= checker
CC 			= cc
CFLAGS 		= -Wall -Wextra -Werror
RM 			= rm -rf

%.o			:	%.c
				$(CC) ${CFLAGS} -c $< -o $@
	

all			:	$(NAME)

$(NAME)		:	$(LIBFT) $(OBJES) push_swap.h
				$(CC) $(OBJES) ${LIBFT} -o $(NAME)
				
$(NAME_B)	:   $(LIBFT) $(OBJES_B) push_swap.h
				$(CC) $(OBJES_B) ${LIBFT} -o $(NAME_B)

$(LIBFT)	:
				$(MAKE) -C $(LIBFT_PATH)

bonus		: $(NAME_B)

clean		:
				$(MAKE) -C $(LIBFT_PATH) clean
				$(RM) $(OBJES)
				$(RM) $(OBJES_B)

fclean		:	clean
				$(MAKE) -C $(LIBFT_PATH) fclean
				$(RM) $(NAME)
				$(RM) $(NAME_B)

re			:	clean all

.PHONY		:	all clean fclean re ${LIBFT}