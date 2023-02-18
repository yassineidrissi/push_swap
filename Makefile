# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yaidriss <yaidriss@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/12 22:48:21 by yaidriss          #+#    #+#              #
#    Updated: 2023/02/18 15:44:04 by yaidriss         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIBFT_PATH		=	./libft
LIBFT			=	$(LIBFT_PATH)/libft.a

SRCS			= 	push_swap.c \
					srcs/arg_valid.c \
					outils/operations.c\
					outils/operations2.c\
					outils/operations3.c\
					outils/operations4.c\
					outils/outils.c\
					outils/outils2.c\
					outils/sort_lst_radix.c\
					outils/sort_lst_man2.c\
					outils/sort_lst_man.c\
					outils/ft_printf.c\
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
					
# SRCS_B			=   push_swap.c \
# 					srcs/arg_valid.c \
# 					outils/operations.c\
# 					outils/outils.c\
# 					outils/sort_lst_radix.c\
# 					outils/sort_lst_man.c\
# 					outils/ft_printf.c\
					
OBJES 		= ${SRCS:.c=.o}
# OBJES_B 	= ${SRCS_B:.c=.o}

NAME 		= push_swap
# NAME_B		= checker
CC 			= cc
CFLAGS 		=  -Wall -Wextra -Werror
RM 			= rm -rf

%.o			:	%.c
				@$(CC) ${CFLAGS} -c $< -o $@
	

all			:	1337_logo $(NAME)


1337_logo : 
	@echo "\033[92m░░███╗░░██████╗░██████╗░███████╗\033[0m"
	@echo "\033[92m░████║░░╚════██╗╚════██╗╚════██║\033[0m"
	@echo "\033[92m██╔██║░░░█████╔╝░█████╔╝░░░░██╔╝\033[0m"
	@echo "\033[92m╚═╝██║░░░╚═══██╗░╚═══██╗░░░██╔╝░\033[0m"
	@echo "\033[92m███████╗██████╔╝██████╔╝░░██╔╝░░\033[0m"
	@echo "\033[92m╚══════╝╚═════╝░╚═════╝░░░╚═╝░░░\033[0m"
	@echo ""
	@echo "\033[92m generation of client and server exucted files✅\033[0m"


$(NAME)		:	$(LIBFT) $(OBJES) push_swap.h
				@$(CC) $(OBJES) ${LIBFT} -o $(NAME)
				
# $(NAME_B)	:   $(LIBFT) $(OBJES_B) push_swap.h
# 				@$(CC) $(OBJES_B) ${LIBFT} -o $(NAME_B)

$(LIBFT)	:
				@$(MAKE) -C $(LIBFT_PATH)

# bonus		: $(LIBFT) $(OBJES) push_swap.h
# 					 $(NAME_B)

clean		:
				@$(MAKE) -C $(LIBFT_PATH) clean
				@$(RM) $(OBJES)
				@$(RM) $(OBJES_B)
				@echo "\033[31m Delete exucted files🗑\033[31m"

fclean		:	clean
				@$(MAKE) -C $(LIBFT_PATH) fclean
				@$(RM) $(NAME)
				@$(RM) $(NAME_B)
				@echo "\033[31m Delete object files🗑\033[31m"

re			:	fclean all

.PHONY		:	all clean fclean re ${LIBFT}