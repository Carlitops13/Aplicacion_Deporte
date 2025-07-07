# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "Aplicacion_Deportes_autogen"
  "CMakeFiles\\Aplicacion_Deportes_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Aplicacion_Deportes_autogen.dir\\ParseCache.txt"
  )
endif()
