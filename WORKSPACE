load("@bazel_tools//tools/build_defs/repo:git.bzl", "git_repository")
load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")


git_repository(
  name = "google_gtest",
  tag = "v1.13.0",
  remote = "https://github.com/google/googletest"
)

# git_repository
#   - only works with bazel dependencies
# new_git_repository (internal) / rules_foreign_cc (external)
#   - should be for non-bazel dependencies but I'm a noob in C++ development so I didn't bother
http_archive(
    name = "raysan5_raylib",
    urls = ["https://github.com/raysan5/raylib/releases/download/4.2.0/raylib-4.2.0_win64_msvc16.zip"],
    sha256 = "f1d936f7a10642a5f44eabc2eeeb2bf1faa9ce115f5a1db0cfa1e9f28156deec",
    # AFAIK, this moves everything in the downloaded and unzipped folder, 1 folder up
    # that way you don't have to use long paths in the build_file
    strip_prefix = "raylib-4.2.0_win64_msvc16",
    # Reference to the BUILD file that'll be copied into the downloaded dep. to make it a bazel target
    build_file = "@//:raylib.BUILD",
)