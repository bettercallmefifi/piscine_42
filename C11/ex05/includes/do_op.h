/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feel-idr <feel-idr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 21:13:29 by feel-idr          #+#    #+#             */
/*   Updated: 2025/09/04 21:13:31 by feel-idr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DO_OP_H
# define DO_OP_H

int		add(int a, int b);
int		sub(int a, int b);
int		mul(int a, int b);
int		divide(int a, int b);
int		modulo(int a, int b);
int		ft_atoi(char *str);
void	ft_putnbr(int nb);
int		get_op_index(char op);

#endif
