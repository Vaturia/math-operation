# math-operation

# Description
Math library with simple math operations such as (+, -, *, /, !, ^)

# How to use
In your project's сmakefile, add the following lines:
```cmake
include(FetchContent)

FetchContent_Declare(
    math_library
    GIT_REPOSITORY https://github.com/Vaturia/math-operation.git
)

FetchContent_MakeAvailable(math_library)
target_link_libraries(${YOUR_PROJECT} math_library)
```
In your source files use
```cpp
#include "math_library.h"
```