cmake_minimum_required(VERSION 3.27)
project(knou_lecture_c C)

set(CMAKE_C_STANDARD 11)

add_executable(knou_lecture_c
        code/hello_world/hello_world.c
        code/basic_practice/practice_variable_and_printf.c
        code/basic_practice/practice_char_1.c
        code/basic_practice/practice_enum_1.c
        code/basic_practice/practice_short_int_range_and_overflow.c
        code/basic_practice/practice_global_variable.c
        code/basic_practice/practice_initialize_variable.c
        code/basic_practice/practice_preprocessor_macro_constant.c
        code/basic_practice/practice_preprocessor_macro_funcion.c
        code/basic_practice/practice_preprocessor_conditional.c)
