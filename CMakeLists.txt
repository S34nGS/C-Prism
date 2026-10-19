cmake_minimum_required(VERSION 3.16)
project(audio_visualizer LANGUAGES CXX)

# TODO: set the C++ standard to 17 (look up CMAKE_CXX_STANDARD)

# --- raylib ---
include(FetchContent)
# TODO: use FetchContent_Declare + FetchContent_MakeAvailable to get raylib
#       from its GitHub repo (pick a release tag, e.g. 5.0)

# --- your sources ---
# TODO: build a list of all .cpp files under src/ (hint: file(GLOB_RECURSE ...))

# TODO: add_executable using that list

# TODO: tell the compiler where to find third_party/miniaudio.h
#       (hint: target_include_directories) and src/ for your own headers

# TODO: link raylib to your executable (target_link_libraries)

# Stretch: copy assets/ next to the built executable, or pass the path at runtime.