/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidavtya <tidavtya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 22:38:30 by tidavtya          #+#    #+#             */
/*   Updated: 2022/06/25 17:19:07 by tidavtya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <stdarg.h>

size_t	ft_strlen(const char *str);
int		ft_print_char(char c);
int		ft_print_str(char *str);
int		ft_print_nbr(int n);
int		ft_print_hex(unsigned int nm, char c);
int		ft_print_unbr(unsigned int nm);
int		ft_print_pt(unsigned long long int nm);
int		ft_printf(const char *str, ...);

#endif
