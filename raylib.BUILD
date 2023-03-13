package(default_visibility = ["//visibility:public"])

cc_import(
  # You're referencing the raylib WORKSPACE in other BUILD configs as @[name]
  name = "raylib",
  hdrs = ["include/raylib.h", "include/raymath.h", "include/rlgl.h"],
  # I don't know why does raylib require this .lib and not the raylib.lib
  # but this is the only way that I could make this work
  # interface_library can't target multiple libs (e.g.: with glob), same with shared_library
  interface_library = "lib/raylibdll.lib",
  shared_library = "lib/raylib.dll"
)