# Nous voulons un cmake "récent" pour utiliser les dernières fonctionnalités
cmake_minimum_required(VERSION 3.0)

# Notre projet est étiqueté time
project(time)

# Crée des variables avec les fichiers à compiler
set(SRCS
    Time.cpp
    main.cpp
    )
    
set(HEADERS
    Time.h
    )

# On indique que l'on veut un exécutable "hello" compilé à partir des fichiers décrits par les variables SRCS et HEADERS
add_executable(time ${SRCS} ${HEADERS})
