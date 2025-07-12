cmake_minimum_required(VERSION 3.16)
project(MiProyectoQt VERSION 1.0 LANGUAGES CXX)

# Configuración básica
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Configuración automática para Qt
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

# Buscar Qt 6 (versión moderna)
find_package(Qt6 REQUIRED COMPONENTS Widgets)

# Archivos del proyecto
set(SOURCES
    src/main.cpp
    src/mainwindow.cpp
    src/agregardialog.cpp
)

set(HEADERS
    src/mainwindow.h
    src/agregardialog.h
    src/deportista.h
)

set(FORMS
    src/mainwindow.ui
    src/agregardialog.ui
)

# Crear ejecutable
add_executable(${PROJECT_NAME}
    ${SOURCES}
    ${HEADERS}
    ${FORMS}
)

# Vinculación
target_link_libraries(${PROJECT_NAME} PRIVATE
    Qt6::Widgets
)

# Configuración UTF-8 para el compilador
if(MSVC)
    add_compile_options(/utf-8)
else()
    add_compile_options(-finput-charset=UTF-8 -fexec-charset=UTF-8)
endif()
