<h1 style="opacity: 0; position: absolute;">
	42 ft_printf
</h1>

<p align="center">
  <a href="https://42.fr">
  <img src="./ressources/dark_banner_ft_printf.png" alt="readme banner ft_printf">
  </a>
</p>

<h3 align="center">
	<a href="#about">About</a>
	<span> · </span>
	<a href="#how-to-use">How to use</a>
	<span> · </span>
	<a href="">Test</a>
	<span> · </span>
	<a href="">Libft</a>
</h3>

<p align="center">
	<img alt="GitHub last commit" src="https://img.shields.io/github/last-commit/late9dev/42_printf">
	<img alt="GitHub top language" src="https://img.shields.io/github/languages/top/late9dev/42_printf">
</p>

--- 

## About

`ft_printf` is a project at [42](https://42.fr) where students reimplement the C [printf](https://fr.wikipedia.org/wiki/Printf) function. This challenge emphasizes mastering [variadic functions](https://en.wikipedia.org/wiki/Variadic_function), string formatting, and deep C programming insights.

## How to use

### Clone the repository

```shell
git clone https://github.com/late9dev/42_printf.git ft_printf

cd ft_printf

make all
```

### Create a test

```shell
vim test.c
```

```c
#include "ft_printf.h"

int	main(void)
{
	ft_printf("Hello World !\n My name is %s.\n I'm %d.\n", "Lucas", 25);
	return (0);
}
```

### Compile & run

```shell
gcc -Wall -Wextra -Werror test.c -o test -L. -lftprintf
```

---

<div align="center">
	<i>Student at <a href="https://42.fr"><b>42 Paris</b></a>.</i>
</div>