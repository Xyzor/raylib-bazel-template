cc_library(
    name = "hello_world",
    hdrs = ["helloWorld.h"],
    visibility = ["//test:__pkg__"]
)

cc_binary(
    name = "main",
    srcs = ["main.cpp"],
    # :raylib name comes from the cc_import.name config in raylib.BUILD
    deps = [":hello_world", "@raysan5_raylib//:raylib"]
)