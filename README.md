Libft: Your Very First Own Library
Welcome to the Libft project! This repository contains a C library that includes a variety of general-purpose functions which are essential for many C programming tasks. This README will guide you through understanding, setting up, and contributing to the project.

Table of Contents
Introduction
Common Instructions
Mandatory Part
Technical Considerations
Libc Functions
Additional Functions
Bonus Part
Submission and Peer-Evaluation
Getting Started
Prerequisites
Installation
Usage
Contributing
License
Contact
Introduction
Libft is a project aimed at helping you understand and implement some of the most commonly used standard functions in C. By creating your own library, you'll gain a deeper understanding of how these functions work and be able to use them in future projects.

Common Instructions
Language: All code must be written in C.
Standards: Adhere to the Norm. Any deviation will result in a zero grade.
Memory Management: Properly free all heap-allocated memory. Memory leaks will not be tolerated.
Makefile: Must include NAME, all, clean, fclean, and re rules.
Testing: While not required, creating test programs is highly recommended to ensure your functions work correctly.
Mandatory Part
Technical Considerations
Global variables are forbidden.
Helper functions must be static.
All files should be at the root of the repository.
Use -Wall -Wextra -Werror flags for compilation.
Use ar to create the library (using libtool is forbidden).
Libc Functions
You need to re-implement the following libc functions, each prefixed with ft_:

ft_isalpha
ft_isdigit
ft_isalnum
ft_isascii
ft_isprint
ft_strlen
ft_memset
ft_bzero
ft_memcpy
ft_memmove
ft_strlcpy
ft_strlcat
ft_toupper
ft_tolower
ft_strchr
ft_strrchr
ft_strncmp
ft_memchr
ft_memcmp
ft_strnstr
ft_atoi
ft_calloc
ft_strdup
Additional Functions
Develop these additional functions to enhance your library:

ft_substr
ft_strjoin
ft_strtrim
ft_split
ft_itoa
ft_strmapi
ft_striteri
ft_putchar_fd
ft_putstr_fd
ft_putendl_fd
ft_putnbr_fd
Bonus Part
To further extend the library, implement functions for list manipulation using the t_list structure:

ft_lstnew
ft_lstadd_front
ft_lstsize
ft_lstlast
ft_lstadd_back
ft_lstdelone
ft_lstclear
ft_lstiter
ft_lstmap
Note: The bonus part will only be evaluated if the mandatory part is perfect.

Submission and Peer-Evaluation
Submit your work to the assigned Git repository. Ensure all files are correctly named and located at the root of the repository. Only the work in the repository will be graded.

Getting Started
Prerequisites
Ensure you have gcc and make installed on your system.
Familiarity with C programming.
Installation
Clone the repository and navigate to the project directory:

sh
Copy code
git clone https://github.com/your-username/libft.git
cd libft
Usage
Compile the library using the Makefile:

sh
Copy code
make
Include the library in your projects by linking with libft.a.

Contributing
Contributions are welcome! Please fork the repository and create a pull request with your changes. Ensure your code adheres to the project standards and includes tests where applicable.

License
This project is licensed under the MIT License.

Contact
For any questions or feedback, please contact [your-email@example.com].
