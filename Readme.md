# Simple Unit tester for C++.

This is a simple unit tester for C++.

## Usage

1. Include the `framework.h` file in your test file.
2. Run the test with the `make tester` command.

[example](carbon.png)

## Example

```c++
#include "framework.h"

TEST_CASE("Test 1") {
    ASSERT(1 == 1);
}
```

In your Makefile, include the framework folder like this:

```makefile

# header files
FW_DIR				= framework/
FW_LIB				= $(FW_DIR)framework.a

# source files
$(FW_LIB):
		@make -C $(FW_DIR)

$(NAME): $(FW_LIB) $(OBJS)
		$(CC) $(CFLAGS) $(OBJS) $(FW_LIB) -o $(NAME)

```

Thank you.

## License

MIT License

---
Copyright (c) 2022, [Alley Pereira](https://www.linkedin.com/in/alley-pereira/)