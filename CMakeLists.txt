cmake_minimum_required(VERSION 3.27)
project(CProgramming C)

set(CMAKE_C_STANDARD 11)

add_library(cs50 STATIC cs50/cs50.c
        String.c
        String.c
        String.c
        String.c
        Phonebook.c
        Iteration.c
        Recursion.c
        Address.c
        Chapter1.c
        CHAPTER2.c
)
target_include_directories(cs50 PUBLIC cs50/include)

# Hello World
add_executable(CProgramming main.c
        String.c
        Iteration.c
        Chapter1.c
        CHAPTER2.c
        CHAPTER2.c
        Chapter1.1.c
        chapter1/section-2.c
        chapter1/section-exercise.c
        Bookrough.c
        Fileone.c
        Filetwo.c
)
target_link_libraries(CProgramming cs50)

# Mario
add_executable(Mario mario.c)
target_link_libraries(Mario cs50)

# Array
add_executable(Array array.c)
target_link_libraries(Array cs50)

#String
add_executable(String String.c)
target_link_libraries(String cs50)

#Phonebook
add_executable(Phonebook Phonebook.c)
target_link_libraries(Phonebook cs50)

#Iteration
add_executable(Iteration Iteration.c
        Iteration.c)
target_link_libraries(Iteration cs50)

#Recursion
add_executable(Recursion Recursion.c
        Recursion.c)
target_link_libraries(Recursion cs50)

#Address
add_executable(Address Address.c)
target_link_libraries(Address cs50)
# Memory
add_executable(Memory Memory.c
        Memory.c)
target_link_libraries(Memory cs50)
# CHAPTER_1
add_executable(Chapter1 Chapter1.c
)
target_link_libraries(Chapter1 cs50)
# CHAPTER_1.1
add_executable(Chapter1.1 Chapter1.1.c
        Chapter1.1.c
)
target_link_libraries(Chapter1.1 cs50)
# CHAPTER_1.2
add_executable(Chapter_1_S2 chapter1/section-2.c)
target_link_libraries(Chapter_1_S2 cs50)

# Section_exercise
add_executable(Chapter_1_SE chapter1/section-exercise.c
        chapter1/section-exercise.c)
target_link_libraries(Chapter_1_SE cs50)










# CHAPTER_2
add_executable(CHAPTER2 CHAPTER2.c)
target_link_libraries(CHAPTER2 cs50)
# Book_rough
add_executable(Bookrough Bookrough.c
        Bookrough.c)
target_link_libraries(Bookrough cs50)

# FileOne AND FileTwo linkage
add_executable(Fileone Fileone.c
        Fileone.c)
target_link_libraries(Fileone cs50)

add_executable(Filetwo Filetwo.c
        Filetwo.c)
target_link_libraries(Filetwo cs50)