/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_link.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student1337.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 20:27:16 by yaidriss          #+#    #+#             */
/*   Updated: 2022/08/16 20:27:30 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void testpre(struct node*node)
{   
    int i = 0;
    while(node->link != NULL || node !=NULL)
    {
        printf("Data\t %i >>> %d\n",i,node->data);
        printf("Previous\t %p\n", node->previous);
        printf("Link\t %p\n", node->link);
        printf("#######################\n");
        node = node->link;
        i++;
    }
    printf("Data\t %i >>> %d\n",i,node->data);
    printf("Previous\t %p\n", node->previous);
    printf("Link\t %p\n", node->link);
    printf("################");
}