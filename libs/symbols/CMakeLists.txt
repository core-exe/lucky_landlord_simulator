project(lucky_landlord_symbols)

file(GLOB_RECURSE TARGET_SOURCE ${PROJECT_SOURCE_DIR}/src/*.cpp)

add_library(${PROJECT_NAME} ${TARGET_SOURCE})
target_include_directories(${PROJECT_NAME} PUBLIC ${PROJECT_SOURCE_DIR}/include)
add_library(lls::symbols ALIAS ${PROJECT_NAME})
target_link_libraries(${PROJECT_NAME} PRIVATE lls::items lls::inventory)

