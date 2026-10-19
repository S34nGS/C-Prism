cmake_minimum_required(VERSION 3.16)
project(audio_visualizer LANGUAGES CXX)

# TODO: set the C++ standard to 17 (look up CMAKE_CXX_STANDARD)
set(CMAKE_CXX_STANDARD 17)

# --- raylib ---
include(FetchContent)
# TODO: use FetchContent_Declare + FetchContent_MakeAvailable to get raylib
#       from its GitHub repo (pick a release tag, e.g. 5.0)
FetchContent_Declare(
    raylib
    GIT_REPOSITORY https://github.com/raysan5/raylib.git
    GIT_TAG 6.2
)

FetchContent_MakeAvailable(raylib)

# --- your sources ---
# TODO: build a list of all .cpp files under src/ (hint: file(GLOB_RECURSE ...))
file(GLOB_RECURSE cpp_files
  CONFIGURE_DEPENDS 
  "${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp"
)

# TODO: add_executable using that list
add_executable(cpp_executable ${cpp_files})

# TODO: tell the compiler where to find third_party/miniaudio.h
#       (hint: target_include_directories) and src/ for your own headers
target_include_directories(cpp_executable
  PRIVATE
    "${CMAKE_CURRENT_SOURCE_DIR}/third_party"
    "${CMAKE_CURRENT_SOURCE_DIR}/src"
)

# TODO: link raylib to your executable (target_link_libraries)
target_link_libraries(cpp_executable PRIVATE raylib)

# Stretch: copy assets/ next to the built executable, or pass the path at runtime.