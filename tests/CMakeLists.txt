include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)

# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

# Tests need to be added as executables first
#add_executable(testlib testlib.cpp)

# I'm using C++17 in the test
#target_compile_features(testlib PRIVATE cxx_std_17)

# Should be linked to the main library, as well as the Catch2 testing library
#target_link_libraries(testlib PRIVATE modern_library Catch2::Catch2)

# If you register a test, then ctest and make test will run it.
# You can also run examples and check the output, as well.
#add_test(NAME testlibtest COMMAND testlib) # Command can be a target
