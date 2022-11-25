# CMakeList.txt : CMake project for PluralSight, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

project ("PluralSight")

# Add source to this project's executable.
add_executable (PluralSight "PluralSight.cpp"  "casting.cpp" "Person.h" "Person.cpp"   "Inheirtance.cpp" "Inheirtance.h" "FlowOfControl.cpp" "FlowOfControl.h")

# TODO: Add tests and install targets if needed.
